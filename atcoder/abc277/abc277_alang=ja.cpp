// Problem: A - ^{-1}			Editorial
// Platform: atcoder
// Contest: abc277
// Rating/Difficulty: abc277
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc277/tasks/abc277_a
// Solved on: 2026-11-26T14:45:01.109Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x;
    cin>>n>>x;
    
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        if(ele==x){
            cout<<i<<endl;
            return 0;
        }
    }
}