// Problem: Asteroid Collision
// Platform: learning.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://learning.ccbp.in/course?c_id=75ec5c6a-2fd6-4b44-a4ea-1e081e503ee8&t_id=18767131-e88b-4581-a438-29148d5cf87a&s_id=35a656d6-34d2-4912-bf67-27b5b5929c13
// Solved on: 2026-11-23T15:23:18.215Z

#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& arr) {
    int n = arr.size();
    stack<int> stk;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            stk.push(arr[i]);
        } else {
            while(!stk.empty() && stk.top() > 0 && stk.top() + arr[i] < 0) {
                stk.pop();
            }
            if(stk.empty() || stk.top() < 0) {
                stk.push(arr[i]);
            } else if(stk.top() + arr[i] == 0) {
                stk.pop();
            }
        }
    }

    vector<int> ans(stk.size());
    int i = stk.size() - 1;
    while(!stk.empty()) {
        ans[i] = stk.top();
        stk.pop();
        i--;
    }

    return ans;
}

/*
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = asteroidCollision(arr);

    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
*/