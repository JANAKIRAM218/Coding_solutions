// Problem: First Negative in Windows of Size K | Practice
// Platform: geeksforgeeks
// Language: C++17
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
// Solved on: 2026-11-14T05:43:49.253Z

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        vector<int> res;
        for(int i=0;i<=arr.size()-k;i++){
            deque<int> dq;
            for(int j=i;j<i+k;j++){
                dq.push_back(arr[j]);
            }
            
        bool f=false;
        while(!dq.empty()){
            int x=dq.front();
            dq.pop_front();
            if(x<0){
                res.push_back(x);
                f=true;
                break;
            }
            
        }
        
        if(!f){
            res.push_back(0);
        }
        }
        
        return res;
    }
};