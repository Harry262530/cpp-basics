#include <bits/stdc++.h>
using namespace std;
int intersection(int a[],int b[],int m,int n){
    unordered_set<int> u;
    for (int i=0;i<m;i++){
        u.insert(a[i]);
    }
    int res=0;
    for (int j=0;j<n;j++){
        if (u.find(b[j])!=u.end()){
            res++;
            u.erase(b[j]);
        }
    }
    return res;
}
int main(){
    int a[]={30,10,40,10};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={40,50,20,10,80};
    int n=sizeof(b)/sizeof(b[0]);
    int x=intersection(a,b,m,n);
    cout<<x;
    return 0;
}