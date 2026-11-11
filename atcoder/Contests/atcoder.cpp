// Problem: AtCoder Problems
// Platform: atcoder
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc120/submissions/80740720
// Solved on: 2026-11-11T00:01:26.508Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B,K;
    cin>>A>>B>>K;
    int gcd_ans=gcd(A,B);
    vector<int>cd;
    for (int i=1;i<=gcd_ans/i;i++){
        if(gcd_ans%i==0){
            cd.push_back(i);
            if(i!=gcd_ans/i){
                cd.push_back(gcd_ans/i);
            }
            
        }
    }
    sort(cd.begin(),cd.end());
    
    cout<<cd[cd.size()-K]<<endl;
    
  return 0;
}