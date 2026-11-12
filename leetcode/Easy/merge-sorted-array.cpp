// Problem: Merge Sorted Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/merge-sorted-array/
// Solved on: 2026-11-12T06:21:06.123Z

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>mer;
        for(int i = 0; i< m; i++){
            mer.push_back(nums1[i]);
        }
        for(int i = 0; i< n; i++){
            mer.push_back(nums2[i]);
        }
        int siz = m+n;
        sort(mer.begin(), mer.end());
        nums1.clear();
        for(int x : mer){
            nums1.push_back(x);
        }
    }
};