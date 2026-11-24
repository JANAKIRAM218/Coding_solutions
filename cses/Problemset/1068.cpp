// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19436105/
// Solved on: 2026-11-24T14:08:51.907Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long  n;
    cin>>n;
    cout<<n<<" ";
    while(true){
        if(n==1){

            break;
        }
        else if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else {
            n=n*3 + 1; 
            cout<<n<<" ";
        }
        
    }

  return 0;
}