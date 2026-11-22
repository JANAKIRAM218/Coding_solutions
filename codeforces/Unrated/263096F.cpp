// Problem: F. Deque
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/263096/problem/F
// Solved on: 2026-11-22T06:00:33.614Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    deque<int> DQ;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(str=="push_back"){
            int x;
            cin>>x;
            DQ.push_back(x);
        }
        else if (str=="push_front"){
             int x;
            cin>>x;
            DQ.push_front(x);
            
        }
        else if (str=="front"){
            cout<<DQ.front()<<endl;
        }
        else if(str=="back"){
             cout<<DQ.back()<<endl;
        }
        else if(str=="pop_back"){
            
                DQ.pop_back();
            
            
        }
        else if(str=="pop_front"){
           
                DQ.pop_front();
            
        }
        else if(str=="print"){
            int x;
            cin>>x;
            cout<<DQ[x-1]<<endl;
            
        }
    }
  return 0;
}