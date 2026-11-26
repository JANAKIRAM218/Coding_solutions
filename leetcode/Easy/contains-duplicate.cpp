// Problem: Contains Duplicate
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/contains-duplicate/
// Solved on: 2026-11-26T10:55:25.542Z

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1) return true;
            mp[nums[i]]++;
        }
        return false;   
    }
};