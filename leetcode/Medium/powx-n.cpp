// Problem: Pow(x, n)
// Platform: leetcode
// Contest: Medium
// Rating/Difficulty: Medium
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/powx-n/description/
// Solved on: 2026-11-16T06:10:23.724Z


class Solution {
    double fastPow(double x, long long n) {

        if (n == 0) return 1.0;

        double half = fastPow(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }

        return x * half * half;
    }

public:
    double myPow(double x, int n) {

        long long N = n;

        if (N < 0) {
            return 1.0 / fastPow(x, -N);
        }

        return fastPow(x, N);
    }
};