#include <bits/stdc++.h>
using namespace std;
int maxlength(int arr[],int n){
    int res=0;
    unordered_set<int> s;
    for (int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for (int i=0;i<n;i++){
        if (s.find(arr[i]-1)==s.end()){
            int curr=arr[i];
            while (s.find(curr)!=s.end()){
            curr++;
            }
            res=max(res,curr-arr[i]);
        }
    }
    return res;
}
int main(){
    int arr[]={3,8,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=maxlength(arr,n);
    cout<<x;
    return 0;
}