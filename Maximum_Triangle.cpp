
vector<int> maximumPerimeterTriangle(vector<int> sticks) {

sort(sticks.begin(), sticks.end());
vector<int> triangle;

for(int i = sticks.size()-1; i>=2; i--){
int l1 = sticks[i];
int l2 = sticks[i-1];
int l3 = sticks[i-2];

if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
    triangle.push_back(l1);
    triangle.push_back(l2);
    triangle.push_back(l3);
    sort(triangle.begin(), triangle.end());
    return triangle;
}
}
triangle.push_back(-1);
return triangle;
}
