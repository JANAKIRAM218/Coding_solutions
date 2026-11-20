// Problem: Valid Parentheses
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-parentheses/
// Solved on: 2026-11-20T04:27:54.829Z

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for (char i : s) {
            if (i == ')') {
                if (stk.empty() || stk.top() != '(') {
                    return false;
                }
                stk.pop();
            } else if (i =='}' ) {
                if ( stk.empty() ||  stk.top() != '{') {
                    return false;
                }
                stk.pop();
            } else if (i == ']') {
                if ( stk.empty() ||  stk.top() != '[') {
                    return false;
                }
                stk.pop();
            } else {
                stk.push(i);
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};