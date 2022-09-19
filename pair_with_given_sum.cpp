#include <bits/stdc++.h>
using namespace std;
bool Pair(int arr[],int n,int sum){
    unordered_set<int> u;
    for (int i=0;i<n;i++){
        if (u.find(sum-arr[i])!=u.end()){
            return true;
        }
        u.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[]={3,2,8,15,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=17;
    int x=Pair(arr,n,sum);
    cout<<x;
    return 0;
}