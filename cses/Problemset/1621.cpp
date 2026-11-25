// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19435957/
// Solved on: 2026-11-25T05:40:30.152Z

#include<bits/stdc++.h>using namespace std; int main() {    int n;    cin>>n;    unordered_map<int,int>mp;    for(int i=0;i<n;i++){        int ele;        cin>>ele;        mp[ele]++;    }    cout<<mp.size()<<endl;   return 0;}