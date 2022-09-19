#include <bits/stdc++.h>
using namespace std;
int maxlength(int arr[],int n,int sum){
    unordered_map<int,int> s;
    int res=0;int presum=0;
    for (int i=0;i<n;i++){
        presum+=arr[i];
        if (presum==sum){
            return i+1;
        }
        if (s.find(presum)==s.end()){
            s.insert({presum,i});
        }
        if (s.find(presum-sum)!=s.end()){
            res=max(res,i-s[presum-sum]);
        }
    }
    return res;
}
int main(){
    int arr[]={8,3,1,5,-6,6,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=4;
    int x=maxlength(arr,n,sum);
    cout<<x;
    return 0;
}