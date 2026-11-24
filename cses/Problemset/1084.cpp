// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19433739/
// Solved on: 2026-11-24T09:01:44.911Z

#include<bits/stdc++.h>using namespace std; int main() {    int n,m,k;    cin>>n>>m>>k;    int  prsn[n];    int app[m];    for(int i=0;i<n;i++){        int person;        cin>>person;        prsn[i]=person;            }    for(int i=0;i<m;i++){        int apartment;        cin>>apartment;        app[i]=apartment;    }    sort(prsn,prsn+n);    sort(app,app+m);     int i=0;     int j=0;     int count=0;     while(i<n && j< m){         if(prsn[i] < app[j] - k){             i++;         }         else if(prsn[i] > app[j] + k){             j++;         }         else {             count++;             i++;             j++;         }     }          cout<<count<<endl;   return 0;}