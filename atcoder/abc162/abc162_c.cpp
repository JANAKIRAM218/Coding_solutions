// Problem: Submission #80741194
// Platform: atcoder
// Contest: abc162
// Rating/Difficulty: abc162
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc162/submissions/80741194
// Solved on: 2026-11-11T00:04:07.424Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int K;
    cin>>K;
    int sum=0;
    for(int i=1;i<=K;i++){
        for(int j=1;j<=K;j++){
            for(int n=1;n<=K;n++){
                int sum_x=gcd(i,j);
                sum+=gcd(sum_x,n);
            }
        }
    }
    cout<<sum<<endl;
  return 0;
}