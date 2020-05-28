
// a^a=0  0^a=a^0=a

int lonelyinteger(vector<int> a) {

int n = 0; 
for(auto k: a){
    n = n^k;
}
return n;
}


// n&1  = n%2
// n>>1 = n/2
// 1<<n = 2^n
long sumXor(long n) {

int zeros = 0;

while(n){
    if((n&1)==0){
        zeros++;
    }
    n = n>>1;
}

return 1L << zeros;

}


long flippingBits(long n) {

    unsigned int k = ~n;
    return k;
}
