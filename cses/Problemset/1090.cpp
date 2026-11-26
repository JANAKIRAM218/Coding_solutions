// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19447603/
// Solved on: 2026-11-26T06:21:22.091Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr[i]=ele;
    }
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    int count=0;
    while(i<=j){
        if(arr[i]+arr[j]<=x){
            count++;
            i++;
            j--;
        }
        else{
            count+=1;
            j--;
        }
    }
    cout<<count<<endl;
  return 0;
}