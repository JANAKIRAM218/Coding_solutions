// Problem: Contains Duplicate
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/contains-duplicate/submissions/2029326668/
// Solved on: 2026-11-24T08:14:07.096Z

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