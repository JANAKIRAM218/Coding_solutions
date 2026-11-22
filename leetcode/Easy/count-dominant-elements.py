// Problem: Count Dominant Elements
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: python
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-dominant-elements/
// Solved on: 2026-11-22T03:16:18.228Z

class Solution(object):
    def countDominantElements(self, nums):
        count=0
        if(len(nums)==1):
            return 1
        if(nums[0]>=nums[1]):
            count+=1
        if(nums[-1]>=nums[-2]):
            count+=1
        for i in range(1,len(nums)-1):
            if((nums[i-1]+nums[i+1])<=(nums[i]*2)):
                count+=1 
        return count
            
        