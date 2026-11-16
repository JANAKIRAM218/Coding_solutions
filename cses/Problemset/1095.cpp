// Problem: Task
// Platform: cses
// Language: C++17
// Verdict: Accepted
// URL: https://cses.fi/problemset/result/19370110/
// Solved on: 2026-11-16T04:49:44.436Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int M=1000000007;
    int tc;
    cin>>tc;
    while(tc){
        long long  ans=1;
        long long a,b;
        cin>>a>>b;
        while(b){
            if(b%2!=0){
                ans=(ans*a)%M;
            }
            a=(a*a)%M;
            b/=2;
        }
        cout<<ans<<endl;
        tc--;
    }
    
  return 0;
}