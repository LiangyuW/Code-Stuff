int cookies(int k, vector<int> A) {

priority_queue<int, vector<int>, greater<int>> pq;
for(auto e: A){
    pq.push(e);
}

int counter = 0;

while(pq.size()>1 && pq.top()<k){
    int t1 = pq.top();
    pq.pop();
    int t2 = pq.top();
    pq.pop();
    int s = t1+2*t2;
    pq.push(s);
    counter++;
}

if(pq.top()>=k){
return counter;
} else{
    return -1;
}
}
