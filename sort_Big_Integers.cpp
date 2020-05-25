

#include <bits/stdc++.h>

using namespace std;


bool compare(string a, string b){
    int s = a.length();
    int t = b.length();
    if(s==t){
    return (a<b);}
    return (s<t);
}

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {

sort(unsorted.begin(), unsorted.end(), compare);

return unsorted;
}
