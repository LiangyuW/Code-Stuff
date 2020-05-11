#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
     cin >> n;
     vector<int> v;
    for(int i = 0; i< n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int q;
    cin >> q;


    while(q--) {
        int j;
        string str;
        cin >> j;
        auto low = lower_bound(v.begin(), v.end(), j);
        if(*low != j) {str = "No ";} else { str = "Yes ";}
        cout << str << low-v.begin()+1 << endl;
    }

    return 0;
}
