// Problem: B. Stubborn Pen
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/2290/problem/B
// Solved on: 2026-11-13T04:08:14.108Z

n=int(input())
for i in range(n):
    ls=int(input())
    s=input()
    count=0
    if(s[0]!='R'):
        count+=1
    for i in range(1,ls):
        if(s[i-1]==s[i]):
            count+=1
    print(count)