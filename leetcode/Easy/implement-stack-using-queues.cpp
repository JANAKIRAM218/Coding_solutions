// Problem: Implement Stack using Queues
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/implement-stack-using-queues/
// Solved on: 2026-11-20T05:45:22.048Z

class MyStack {

public:
    queue<int> mainq;
    MyStack() {}

    void push(int x) { mainq.push(x); }

    int pop() {
        queue<int> sub;
        while(mainq.size()>1){
            int  x=mainq.front();
            sub.push(x);
            mainq.pop();
        }
        
        int ans=mainq.front();
        mainq.pop();

        while(!sub.empty()){
            int x=sub.front();
            mainq.push(x);
            sub.pop();
        }

        return ans;
    }

    int top() {
        queue<int>sub;
        while(mainq.size()>1){
            int x=mainq.front();
            sub.push(x);
            mainq.pop();
        }
        int ans=mainq.front();
        mainq.pop();

        while(!sub.empty()){
            int x=sub.front();
            mainq.push(x);
            sub.pop();
        }
        mainq.push(ans);
        return ans;
    }

    bool empty() {
         return mainq.empty(); 
         }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */