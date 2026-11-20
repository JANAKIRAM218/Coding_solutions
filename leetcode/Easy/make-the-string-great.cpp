// Problem: Make The String Great
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/make-the-string-great/
// Solved on: 2026-11-20T05:52:36.441Z

class Solution {
public:
    string makeGood(string s) {
        string ans;
        for(char ch:s){
            if(!ans.empty() && abs(ans.back()-ch)==32){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};