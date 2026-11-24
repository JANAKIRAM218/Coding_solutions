// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19436625/
// Solved on: 2026-11-24T15:19:02.021Z

n=int(input())
if(n==1):
    print(1)
elif(n<=3):
    print("NO SOLUTION")
else:
    f=n-1 
    while(f>0):
        print(f,end=" ")
        f-=2
    s=n
    while(s>0):
        print(s,end=' ')
        s-=2

        