// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19436516/
// Solved on: 2026-11-24T15:05:09.718Z

n=int(input())
if(n<=3):
    print("NO SOLUTION")
else:
    first=[]
    f=2
    s=n 
    second=[]
    while(s>0):
        second.append(s)
        s-=2
    while(f<n):
        first.append(f)
        f+=2
        
final=first[::-1]+second
for i in final:
    print(i,end=" ")

        