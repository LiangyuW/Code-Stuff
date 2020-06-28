#include <cmath>
#include <cstdio>
#include <sys/types.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find(vector<int>&root, int i){
    if(root[i]==-1) return i;
    return root[i]=find(root, root[i]);
}

void Union(vector<int>&root, int a, int b, vector<int>&size){
    int aset=find(root, a);
    int bset=find(root, b);
    if(aset!=bset){
        root[aset]=bset;
        size[bset]+=size[aset];
    }
}


int main() {

    int n; int q;
    cin>>n>>q;

    vector<int> root(n+1, -1);
    vector<int> size(n+1, 1);

    while(q--){
        string s;
        cin>>s;
        if(s=="M"){
            int a; int b;
            cin>>a>>b;
            Union(root, a, b, size);
        }
        else if(s=="Q"){
            int a;
            cin>>a;
            cout<<size[find(root, a)]<<endl;
        }
        
    }


    return 0;
}
