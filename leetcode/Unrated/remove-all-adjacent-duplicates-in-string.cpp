// Problem: Remove All Adjacent Duplicates In String
// Platform: leetcode
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/2199779691/?utm_source=chatgpt.com
// Solved on: 2026-11-20T06:00:52.213Z

class Solution {
public:
    string removeDuplicates(string s) {
        string S;
        for(auto i:s){
            if(!S.empty() && (S.back()==i)){
                S.pop_back();
            }
            else{
                S.push_back(i);
            }
        }
        return S;
    }
};