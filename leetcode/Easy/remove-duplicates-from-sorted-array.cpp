// Problem: Remove Duplicates from Sorted Array
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: unknown
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2070853595/
// Solved on: 2026-11-11T04:31:51.516Z

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