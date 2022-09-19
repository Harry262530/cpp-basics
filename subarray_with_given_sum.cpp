#include <bits/stdc++.h>
using namespace std;
bool givensum(int arr[],int n,int sum){
    unordered_set<int> s;
    int presum=0;
    for (int i=0;i<n;i++){
        presum+=arr[i];
        if (presum==sum){
            return true;
        }
        if (s.find(presum-sum)!=s.end()){
            return true;
        }
        s.insert(presum);
    }
    return false;
}
int main(){
    int arr[]={5,8,6,13,3,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=22;
    bool x=givensum(arr,n,sum);
    cout<<x;
    return 0;
}