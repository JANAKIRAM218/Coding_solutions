// Problem: Secret Code
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/course?c_id=0afb1b0f-7c8e-4a1e-a6d8-276698d13006&q_id=8bcbbad4-ad1d-4d97-9c1f-831336f3f861&s_id=39d1db5d-808d-4886-99a0-996411154578&t_id=34e27d97-89e1-43a7-81c7-f1e155a0e91b
// Solved on: 2026-11-20T05:01:27.210Z

def power(a,b):
        return pow(a,b)

class solution:
    
    def secretCodePower(self, a, digits):
        result=1
        for i in digits:
            result=(power(result,10)*power(a,i))%1337
        return result
        
        