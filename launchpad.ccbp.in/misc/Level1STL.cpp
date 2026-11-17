// Problem: Binary Pair Elimination
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/course?c_id=0afb1b0f-7c8e-4a1e-a6d8-276698d13006&auth_code=Cfi9PhuTKlGzP7bv6GO9GCcTCbSf0K&q_id=393ec30c-0567-4380-b2ed-dc606b837533&s_id=26e244b4-c850-4b82-80c8-e8a3d8afd0d7&t_id=e7ea8d88-5599-447c-ac53-62d307405e28
// Solved on: 2026-11-17T05:51:36.009Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin>>S;
    stack<char> stk;
    int count=0;
    for(auto i:S){
        if(!stk.empty()){
            if(stk.top()!=i){
                stk.pop();
                count+=2;
            }
            else{
                stk.push(i);
            }
        }
        else{
            stk.push(i);
        }
   

    }
     cout<<count<<endl;
    return 0;
}