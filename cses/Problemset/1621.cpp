// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19436160/
// Solved on: 2026-11-24T14:14:12.149Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long  n;
    cin>>n;
    unordered_set<long long > un;
    for(int i=0;i<n;i++){
        long long  ele;
        cin>>ele;
        un.insert(ele);
    }
    cout<<un.size()<<endl;
 
  return 0;
}
