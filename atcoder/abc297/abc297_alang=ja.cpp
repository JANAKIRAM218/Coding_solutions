// Problem: A - Double Click			Editorial
// Platform: atcoder
// Contest: abc297
// Rating/Difficulty: abc297
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_a
// Solved on: 2026-11-26T14:36:56.462Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr[i]=ele;
    }
    
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=d){
            cout<<arr[i]<<endl;
            return 0;
        }
        
    }
  cout<<-1<<endl;
}