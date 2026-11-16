// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19372078/
// Solved on: 2026-11-16T10:40:23.425Z

n=int(input())lst=list(map(int,input().split()))count=0for i in range(1,n):    if(lst[i]<lst[i-1]):        count+=(lst[i-1]-lst[i])        lst[i]=lst[i-1]                print(count)