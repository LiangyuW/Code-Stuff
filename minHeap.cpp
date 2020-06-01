#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void heapify(int ary[], int n, int i){
    int largest= i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && ary[l]>ary[largest]){
        largest=l;
    }
    if(r<n && ary[r]>ary[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(ary[i], ary[largest]);
        heapify(ary, n, largest);
    }
}


void heapSort(int ary[], int n){
    for(int i = n/2-1; i>=0; i--){
        heapify(ary, n, i);
    }
    for(int i=n-1; i>0; i--){
            swap(ary[0], ary[i]);
            heapify(ary, i, 0);
        }
}



void heapify(vector<int> &ary, int i){
    int largest = i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<ary.size() && ary[l]<ary[largest]){
        largest=l;
    }
    if(r<ary.size() && ary[r]<ary[largest]){
        largest=r;
    }
    if(largest != i){
        swap(ary[i], ary[largest]);
        heapify(ary, largest);
    }
}

void siftUp(vector<int> &bry, int i){
    int parent = (i-1)/2;
    if(i != 0){
        if(bry[parent] > bry[i]){
            swap(bry[parent], bry[i]);
            siftUp(bry, parent);
        }
    }
}


void buildHeap(vector<int> &bry) {
    for(int i = bry.size()/2-1; i>=0; i--){
        heapify(bry, i);
    }
}

void insert(vector<int> &bry, int n){
    bry.push_back(n);
    siftUp(bry, bry.size()-1);
}

void remove(vector<int> &bry, int n){
    for(int i = 0; i<bry.size(); i++){
        if(bry[i]==n){
            bry.erase(bry.begin()+i);
        }
    }
    buildHeap(bry);
}

void printMin(vector<int> &bry){
    cout << bry[0] << endl;
}



int main(){

int ary[] = {5,3,2,1,7};
//heapSort(ary, 5);

vector<int> bry;
int n; int j; int v;


cin >> n;

while(n--){
    cin >> j;
    if(j==1){
    cin >> v;
    insert(bry, v);
    } 
    else if(j==2){
    cin >> v;
    remove(bry, v);
    }
    else if(j==3){
    printMin(bry);
    }

}



/*
for(int i = 0; i<sizeof(ary)/sizeof(ary[0]); i++){
    cout << ary[i] << " ";
}*/

return 0;
}
