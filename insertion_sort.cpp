

void insertionSort2(int n, vector<int> arr) {
for(int j = 1; j<n; j++){
int c = arr[j];
int k = j+1;
while(arr[k-2]> c){
        arr[k-1] = arr[k-2];
        k--;
    }
arr[k-1] = c;
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
}
}
