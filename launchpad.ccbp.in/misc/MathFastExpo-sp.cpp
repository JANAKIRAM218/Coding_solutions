// Problem: Exponentioal
// Platform: launchpad.ccbp.in
// Contest: Level 1
// Rating/Difficulty: Level 1
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-11-11T04:51:08.104Z

n=int(input())
ans=1
for  i in range(2,int(n**0.5)+1):
    p=i*i
    while(p<=n):
        ans=max(ans,p)
        p*=i 
        
print(ans)
        