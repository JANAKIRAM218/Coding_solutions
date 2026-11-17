// Problem: Number of Common Factors
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/number-of-common-factors/
// Solved on: 2026-11-17T04:32:41.248Z

class Solution {
public:

    int commonFactors(int a, int b) {
        int count=0;
        int mini=min(a,b);
        for(int i=1;i<=mini;i++){
            if(a%i==0 && b%i==0){
                count+=1;
            }

            }
        return count;
    }
};