// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19435918/
// Solved on: 2026-11-24T14:12:41.001Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    unordered_set<int> un;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        un.insert(ele);
    }
    cout<<un.size()<<endl;

  return 0;
}