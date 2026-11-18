// Problem: Palindrome Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-11-18T04:30:17.859Z

class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        if(x<0 || x%10==0){
            return false;
        }
        
        int reversed=0;
        while(x>reversed){
            int last=x%10;
             reversed=reversed*10+last;
             x=x/10;

        }
        cout<<reversed<<endl;
        if(reversed==x || reversed/10 ==x){
            return true;
        }
        else{
            return false;
        }
    }
};