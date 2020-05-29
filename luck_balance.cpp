

int luckBalance(int k, vector<vector<int>> contests) {

int sum = 0;
sort(contests.begin(), contests.end());

int j = 0;
for(int i = 0; i<contests.size(); i++){
    sum+=contests[i][0];
    if(contests[i][1]==1){
        j++;
    }
}
j=j-k;
cout << sum << endl;

for(int i = 0; i<contests.size(); i++){
if(j > 0 && contests[i][1] == 1){
    sum-=2*contests[i][0];
    j--;
}
}

return sum;
}
