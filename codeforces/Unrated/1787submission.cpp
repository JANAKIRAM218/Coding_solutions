// Problem: Submission #398188711 - Codeforces
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/1787/submission/398188711
// Solved on: 2026-11-12T04:21:48.928Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        if(n%2==0){
            int x=n/2;
            cout<<1<<" "<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        t--;
    }
  return 0;
}