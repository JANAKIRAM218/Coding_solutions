// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19370207/
// Solved on: 2026-11-16T05:09:30.076Z

#include<bits/stdc++.h>using namespace std;long long power(long long a, long long  b){    int M=1000000007;         long long  ans=1;        while(b){            if(b%2!=0){                ans=(ans*a)%M;            }            a=(a*a)%M;            b/=2;        }        return ans;}int main() {    int tc;    cin>>tc;    while(tc){        long long a,b,c;        cin>>a>>b>>c;        long long d=power(b,c);        cout<<power(a,d)<<endl;        tc--;    }      return 0;}