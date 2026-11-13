// Problem: A. Three Piles
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/2290/problem/A
// Solved on: 2026-11-13T04:08:42.557Z

tc=int(input())
for i in range(tc):
    a,b,c=list(map(int,input().split()))
    if((a+1)==b and (b+1)==c):
        print("YES")
    else:
        print("NO")