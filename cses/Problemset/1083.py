// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19370745/
// Solved on: 2026-11-16T06:58:12.391Z

n=int(input())
soa=int(n*(n+1)/2)
sum_x=0
lst=list(map(int,input().split()))
for i in lst:
    sum_x+=i 
print(soa-sum_x)
