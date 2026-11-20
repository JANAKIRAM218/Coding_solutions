// Problem: Baseball Game
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/baseball-game/
// Solved on: 2026-11-20T05:48:16.110Z

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        int res = 0;
        for (auto i : operations) {
            if (i == "C") {
                stk.pop();

            } else if (i == "D") {
                int dou = stk.top() * 2;
                stk.push(dou);
            } else if (i == "+") {
                int half_res = 0;
                int one=stk.top();
                stk.pop();
                int two=stk.top();
                stk.pop();

                half_res=one+two;
                stk.push(two);
                stk.push(one);
                stk.push(half_res);
            } else {
                stk.push(stoi(i));
            }
        }
        while (!stk.empty()) {
            res += stk.top();
            stk.pop();
        }

        return res;
    }
};