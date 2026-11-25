// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19440160/
// Solved on: 2026-11-25T05:42:56.118Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        mp[ele]++;
    }
    cout<<mp.size()<<endl;
 
  return 0;
}
