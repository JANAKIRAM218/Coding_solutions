// Problem: Assign Umbrella on Rainy Days
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: python
// Verdict: Accepted
// URL: https://leetcode.com/problems/assign-umbrella-on-rainy-days/
// Solved on: 2026-11-21T15:01:18.693Z

class Solution(object):
    def assignUmbrella(self, rain):
        lst=[]
        b_count=0
        a_count=0
        for i in range(len(rain)-1):
            if(rain[i]==1 and rain[i+1]==1):
                if(a_count<=b_count):
                    lst.append("Alice")
                    a_count+=1
                    
                else:
                    lst.append("Bob")
                    b_count+=1
                    
                
            elif(rain[i]==1):
                lst.append("Bob")
                b_count+=1
            else:
                lst.append("None")
        if(rain[-1]==1):
            lst.append("Bob")
        else:
            lst.append("None")
        return lst
        