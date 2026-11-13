// Problem: Vector Operations Challenge
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-11-13T04:43:26.633Z

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void insertElement(vector<int> &arr, int x) {
    arr.push_back(x);
        
    }
    
    void deleteElement(vector<int> &arr, int x) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                arr.erase(arr.begin()+i);
                break;
            }
        }
    }
    
    void reverseArray(vector<int> &arr) {
        reverse(arr.begin(),arr.end());
        
    }
    
    void sizeOfArray(vector<int> &arr) {
        cout<<arr.size()<<endl;
        
    }
    
    void displayArray(vector<int> &arr) {
        for (auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
};