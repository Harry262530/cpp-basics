#include <bits/stdc++.h>
using namespace std;
int maxlength(int arr1[],int arr2[],int n,int sum){
    int res=0,presum=0;
    int arr[n];
    for (int i=1;i<n;i++){
        arr[i]=arr1[i]-arr2[i];
    }
    unordered_map<int,int> s;
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
    int arr1[]={0,1,0,0,0,0};
    int arr2[]={1,0,1,0,0,1};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int sum=0;
    int x=maxlength(arr1,arr2,n,sum);
    cout<<x;
    return 0;
}