#include <bits/stdc++.h>
using namespace std;
bool subarray0(int arr[],int n){
    unordered_set<int> u;
    int presum=0;
    for (int i=0;i<n;i++){
        presum+=arr[i];
        if (u.find(presum)!=u.end()){
            return true;
        }
        if (presum==0){
            return true;
        }
        u.insert(presum);
    }
    return false;
}
int main(){
    int arr[]={-3,4,-3,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool x=subarray0(arr,n);
    cout<<x;
    return 0;
}