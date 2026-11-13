// Problem: Smallest Even Multiple
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: python
// Verdict: Accepted
// URL: https://leetcode.com/problems/smallest-even-multiple/
// Solved on: 2026-11-13T05:51:02.115Z

class Solution(object):
    def smallestEvenMultiple(self, n):
        if(n%2==0):
            return n
        return n*2
        