// Problem: Longest Valid Parentheses
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/course?c_id=0afb1b0f-7c8e-4a1e-a6d8-276698d13006&q_id=5f549f49-7e2f-4db6-ab11-da2cedf39cc2&s_id=26e244b4-c850-4b82-80c8-e8a3d8afd0d7&t_id=e7ea8d88-5599-447c-ac53-62d307405e28
// Solved on: 2026-11-17T04:48:29.806Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int count=0;
    stack<int> stk;
    for(auto i:s){
        if(i=='('){
            stk.push(i);
        }
        else{
            if(!stk.empty()){
                stk.pop();
                count+=2;
                
            }
            
            
        }
        }
    cout<<count<<endl;
    return 0;
}