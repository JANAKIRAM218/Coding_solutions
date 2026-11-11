// Problem: Submission #79431405
// Platform: atcoder
// Contest: abc467
// Rating/Difficulty: abc467
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc467/submissions/79431405
// Solved on: 2026-11-11T00:07:13.327Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin>> h>> w;

    int l =400*w;
    int r=h*h;

    if (l>=r) {
        cout <<"Yes"<<endl;
    }
    else {
        cout <<"No"<< endl;
    }

    return 0;
}