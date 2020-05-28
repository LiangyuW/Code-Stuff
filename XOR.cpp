int lonelyinteger(vector<int> a) {

int n = 0; 
for(auto k: a){
    n = n^k;
}
return n;
}
