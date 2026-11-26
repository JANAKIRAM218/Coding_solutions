// Problem: Implement Queue using Stacks
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/implement-queue-using-stacks/
// Solved on: 2026-11-26T10:50:35.942Z

class MyQueue {
    stack<int> stk;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> sub;
        while(!stk.empty()){
            sub.push(stk.top());
            stk.pop();
        }
        stk.push(x);
        while(!sub.empty()){
            stk.push(sub.top());
            sub.pop();
        }

    }
    
    int pop() {
        int ans=stk.top();
        stk.pop();
        return ans;
    }
    
    int peek() {
        return stk.top();
       
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */