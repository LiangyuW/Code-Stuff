#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack> 
using namespace std;


int main() {
    
int n;
cin >> n;

stack<int> s1;
stack<int> s2;

while(n--){
    int t;
    int s;
    cin >> t;

    if(t==1){
        cin >> s;
        s1.push(s);
    }
    else if(t==2){
        if(s2.empty()){
            while(s1.empty()==false){
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s2.empty()==false){
            s2.pop();
        }
    }
    else if(t==3) {
        if(s2.empty()){
            while(s1.empty()==false){
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << endl;
    }
}

    return 0;
}
