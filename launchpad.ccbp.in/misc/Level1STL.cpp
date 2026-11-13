// Problem: Pair Sum and Concatenation Challenge
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-11-13T04:42:35.980Z

class solution:
    def operate(self, pairs):
        numres=0
        strres=""
        for i in range(len(pairs)):
            numres+=pairs[i][0]
            strres+=pairs[i][1]
            
        print(numres)
        print(strres)
        print(len(strres))
        
    