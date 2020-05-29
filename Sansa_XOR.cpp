

//Sansa has an array. She wants to find the value obtained by XOR-ing the contiguous subarrays, 
//followed by XOR-ing the values thus obtained. 

//If the list is 0 indexed, the number at i-th index will occur (i+1)*(n-i) times.  

int sansaXor(vector<int> arr) {

int len = arr.size();
if(len%2==0){
    return 0;
    } else {
    int x = 0;
    for(int i = 0; i < len; i+=2){
        x ^= arr[i]; 
    }
    return x;
    }
}
