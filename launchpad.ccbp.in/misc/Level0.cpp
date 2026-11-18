// Problem: Month form NUmber
// Platform: launchpad.ccbp.in
// Language: C++17
// Verdict: Accepted
// URL: https://launchpad.ccbp.in/question/e5d5936c-b005-4d2e-9b10-88d44c57d621
// Solved on: 2026-11-18T04:35:25.966Z

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void getMonthName(int monthNumber) {
        switch (monthNumber) {
            case 1: cout << "January" << endl; break;
            case 2: cout << "February" << endl; break;
            case 3: cout << "March" << endl; break;
            case 4: cout << "April" << endl; break;
            case 5: cout << "May" << endl; break;
            case 6: cout << "June" << endl; break;
            case 7: cout << "July" << endl; break;
            case 8: cout << "August" << endl; break;
            case 9: cout << "September" << endl; break;
            case 10: cout << "October" << endl; break;
            case 11: cout << "November" << endl; break;
            case 12: cout << "December" << endl; break;
            default: cout << "Invalid input!" << endl; break;
        }
    

    }
};