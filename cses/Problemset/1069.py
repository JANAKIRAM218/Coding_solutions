// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/19436246/
// Solved on: 2026-11-24T14:26:36.917Z

string=input()
count=1
ans=1
prev=string[0]
for i in range(1,len(string)):
    if(prev==string[i]):
        count+=1 
    else:
        prev=string[i]
        ans=max(ans,count)
        count=1
        
ans=max(ans,count)
print(ans)
    
    
    