#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

int count = 0;
for(int i = 0; i<s.length(); i++)
if(s[i]!=' '){
    s[count++] = s[i];
}
s[count] = '\0';

int row = floor(sqrt(count));
int col = ceil(sqrt(count));
if(row*col< count){
    row++;
}


int k[row][col];
int t = 0;
for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        if(t<count){
        k[i][j] = s[t];
        cout << s[t];
        t++;
        }
    }
}

string out = "";
t = 0;
for(int i = 0; i<col; i++){
    for(int j = 0; j<row; j++){
        if(t<count &&(k[j][i]!= '\0'&&k[j][i]!=NULL)){
        out += k[j][i];
        t++;
        }
   }
   out = out + " ";
}

return out;

}
