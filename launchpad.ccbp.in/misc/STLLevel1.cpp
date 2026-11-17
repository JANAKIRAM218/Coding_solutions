// Problem: Shortest Bracket Completion
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/course?c_id=0afb1b0f-7c8e-4a1e-a6d8-276698d13006&auth_code=Cfi9PhuTKlGzP7bv6GO9GCcTCbSf0K&q_id=17b70949-c29a-425b-8af2-2f7d6984c7cf&s_id=26e244b4-c850-4b82-80c8-e8a3d8afd0d7&t_id=e7ea8d88-5599-447c-ac53-62d307405e28
// Solved on: 2026-11-17T05:49:48.979Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    string front="";
    string last="";
    cin>>n>>s;
    stack<char> stk;
    for (int i =0;i<n;i++){
        if(!stk.empty()){
            if(s[i]==')' && stk.top()=='('){
            stk.pop();
        }
        else{
            stk.push(s[i]);
        }
        }
        else{
            stk.push(s[i]);
        }
    }
    while(!stk.empty()){
        if(stk.top() == '('){
            last+=')';
        }
        else{
            front+='(';
        }
        stk.pop();
    }
    cout<<front<<s<<last<<endl;
    return 0;
}