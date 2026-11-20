// Problem: Dequeue Operation
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/course?c_id=0afb1b0f-7c8e-4a1e-a6d8-276698d13006&q_id=57e1254c-1da1-45b6-b5ba-d7656088fecc&s_id=1b85abc3-d792-446c-99d4-57c94cce7d50&t_id=e7ea8d88-5599-447c-ac53-62d307405e28
// Solved on: 2026-11-20T04:38:12.239Z

#include <bits/stdc++.h>
using namespace std;

class solution {
   public:
    void addOrderToFront(deque<int>& orders, int orderId) { orders.push_front(orderId); }
    void addOrderToBack(deque<int>& orders, int orderId) { orders.push_back(orderId); }
    void removeOrderFromFront(deque<int>& orders) {
        if(!orders.empty()){
            orders.pop_front();
            
        }
            }
    void removeOrderFromBack(deque<int>& orders) { 
        if(!orders.empty()){
            orders.pop_back();} }
    void displayOrders(deque<int>& orders) {
        for (int i : orders) {
            cout << i << endl;
        }
    }
};