// Problem: Implement pow(x,n)
// Platform: Nxtwave
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-11-11T00:10:07.937Z

#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    double xPowN(double x, long long n) {
        if(n==0) return 1;
        if(n<0) return 1/xPowN(x,-n);
        if(n%2!=0) return x*xPowN(x,n-1);
        double half=xPowN(x,n/2);
        return half*half;
        
    }
};