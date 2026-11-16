// Problem: Task
// Platform: cses
// Language: C++17
// Verdict: Accepted
// URL: https://cses.fi/problemset/task/1094/
// Solved on: 2026-11-16T10:40:40.447Z

n=int(input())
lst=list(map(int,input().split()))
count=0
for i in range(1,n):
    if(lst[i]<lst[i-1]):
        count+=(lst[i-1]-lst[i])
        lst[i]=lst[i-1]
        
        
print(count)