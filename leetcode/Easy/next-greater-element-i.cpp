// Problem: Next Greater Element I
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/next-greater-element-i/
// Solved on: 2026-11-24T09:43:26.235Z

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        int len = nums2.size();
        stack<int> stk;
        for (int i = len - 1; i > -1; i--) {
            while (!stk.empty() && stk.top() <= nums2[i]){
                stk.pop();
            }
            if (stk.empty()) {
                mp[nums2[i]] = -1;
            } else {
                mp[nums2[i]] = stk.top();
            }

            stk.push(nums2[i]);
        }
        for (int j=0;j<nums1.size();j++){
            nums1[j]=mp[nums1[j]];
        }
        return nums1;
    }
};