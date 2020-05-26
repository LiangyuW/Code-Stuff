#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

int v1 = 0;
for(auto i: h1){
    v1 += i;
}
int v2 = 0;
for(auto i: h2){
    v2 += i;
    }
int v3 = 0;
for(auto i: h3){
    v3 += i;
    }

int top1=0, top2=0, top3=0;
while(1){

    if(top1==h1.size()||top2==h2.size()||top3==h3.size()){
        return 0;
    }

    if(v1==v2 && v2==v3){
        return v1;
    }

    if(v1>=v2 && v1 >= v3){
        v1 -= h1[top1++];
    } 
    else if(v2>=v1 && v2>=v3){
        v2 -= h2[top2++];
    }
    else if(v3>=v1 && v3>=v2){
        v3 -= h3[top3++];
    }

}

}
