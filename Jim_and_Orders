

#include <bits/stdc++.h>

using namespace std;

bool sortcol(vector<int> a, vector<int> b){
    return a[1]<b[1];
}

vector<int> jimOrders(vector<vector<int>> orders) {

vector<vector<int>> k(orders.size(), vector<int>(2, 0));
vector<int> G;
for(int i=0; i< orders.size();i++) {
    k[i][0] = i+1;
    k[i][1] = orders[i][0]+orders[i][1];
}
stable_sort(k.begin(), k.end(), sortcol);
for(int i =0; i< orders.size(); i++){
    G.push_back(k[i][0]);
}
return G;
}
