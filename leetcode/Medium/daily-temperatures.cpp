// Problem: Daily Temperatures
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/daily-temperatures/
// Solved on: 2026-11-24T13:45:47.096Z

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        stack<int> stk;
        int n=temperatures.size();
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && temperatures[stk.top()]<=temperatures[i]){
                stk.pop();

            }
            if(!stk.empty() && temperatures[stk.top()]>temperatures[i]){
                ans.push_back(stk.top()-i);
            }
            else{
                ans.push_back(0);
            }
            stk.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};