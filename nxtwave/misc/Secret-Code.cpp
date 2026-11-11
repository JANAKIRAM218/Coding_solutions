// Problem: Secret Code
// Platform: NxtWave
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-11-11T04:36:55.302Z

#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int power(int a,int b){
        int result=1;
        a%=1337;
        while(b>0){
            if(b%2==1){
                result=(result*a)%1337;
            }
            a=(a*a)%1337;
            b=b/2;
        }
        return result;
    }
    int secretCodePower(int a, vector<int>& digits) {
        int mod=1337;
        int res=1;
        for(int i:digits){
            res=(power(res,10)*power(a,i))%mod;
        }
        return res;
    }
};