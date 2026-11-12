// Problem: A. Prime Subtraction
// Platform: codeforces
// Contest: 900
// Rating/Difficulty: 900
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/problemset/problem/1238/A
// Solved on: 2026-11-12T04:30:08.249Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t>0){
        long long  x,y;
        cin>>x>>y;
        // cout<<x<<endl;
        long long  val=x-y;
        if(val!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // cout<<val<<endl;
        
        t--;
    }
  return 0;
}