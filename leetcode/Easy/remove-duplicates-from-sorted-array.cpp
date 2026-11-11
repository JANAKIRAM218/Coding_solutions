// Problem: Remove Duplicates from Sorted Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Solved on: 2026-11-11T04:31:25.388Z

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;

    }
};