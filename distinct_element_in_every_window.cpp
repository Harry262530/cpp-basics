#include <bits/stdc++.h>
using namespace std;
void distinctelement(int arr[],int n,int k){
    int count=0;
    unordered_map<int,int> s;
    for (int i=0;i<k;i++){
        if (s.find(arr[i])==s.end()){
            count++;
        }
        s[arr[i]]++;
    }
    cout<<count<<" ";
    for (int i=k;i<n;i++){
        if (s[arr[i-k]]==1){
            count--;
        }
        s[arr[i-k]]--;
        if (s[arr[i]]==0){
            count++;
        }
        s[arr[i]]++;
        cout<<count<<" ";
    }
}
int main(){
    int arr[]={10,20,10,10,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    distinctelement(arr,n,k);
    return 0;
}