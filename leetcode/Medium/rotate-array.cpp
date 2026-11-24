// Problem: Rotate Array
// Platform: leetcode
// Contest: Medium
// Rating/Difficulty: Medium
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/rotate-array/
// Solved on: 2026-11-24T08:12:58.263Z

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

    }
};