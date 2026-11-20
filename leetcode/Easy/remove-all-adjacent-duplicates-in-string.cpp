// Problem: Remove All Adjacent Duplicates In String
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Solved on: 2026-11-20T05:58:28.625Z

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