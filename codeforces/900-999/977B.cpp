// Problem: B. Two-gram
// Platform: codeforces
// Contest: 900
// Rating/Difficulty: 900
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/977/problem/B
// Solved on: 2026-11-20T23:47:11.308Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    map<string,int>mp;
    int n;
    cin>>n;
     string str;
    cin>>str;
    for(int i=0;i<n-1;i++){
        string subs=str.substr(i,2);
        
        mp[subs]++;
    }
    int max_value=0;
    string max_ans="";

    for(const auto &[key,value]: mp){
        if(value>max_value){
            max_value=value;
            max_ans=key;
        }
        
    
    }
    cout<<max_ans<<endl;
  return 0;
}