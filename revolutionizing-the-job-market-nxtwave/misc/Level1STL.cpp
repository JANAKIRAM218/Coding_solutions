// Problem: Stack Ball Elimination
// Platform: Revolutionizing the Job Market | NxtWave
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/course?c_id=0afb1b0f-7c8e-4a1e-a6d8-276698d13006&q_id=a5949af8-24f4-4dde-bae0-3000c58dd354&s_id=26e244b4-c850-4b82-80c8-e8a3d8afd0d7&t_id=e7ea8d88-5599-447c-ac53-62d307405e28
// Solved on: 2026-11-24T05:04:07.739Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    stack<pair<int,int>> stk;
    for(int i=0;i<n;i++){
        int ball;
        cin>>ball;
        if(!stk.empty() && stk.top().first==ball){
            stk.push({ball,stk.top().second+1});
            if(stk.top().first==stk.top().second){
                int k=stk.top().first;
                while(k--){
                    stk.pop();
                }
            }
        }
        else {
            stk.push({ball,1});
        }
        cout<<stk.size()<<endl;
    }
    return 0;
}