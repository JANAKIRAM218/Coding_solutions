// Problem: Daily Temperatures
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/daily-temperatures/
// Solved on: 2026-11-24T10:38:05.133Z

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<int>stk;
        for (int i=temperatures.size()-1;i>-1;i--){
            while(!stk.empty() && temperatures[stk.top()]<=temperatures[i]){
                stk.pop();
            }
            if(stk.empty()){
                ans[i]=0;
            }
            else{
                ans[i]=stk.top()-i;
            }
            stk.push(i);
        }
      
        return ans;
    }
};