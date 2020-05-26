#include <bits/stdc++.h>

using namespace std;

void extraLongFactorials(int n) {

int f[10000] ={1};
int f_size = 1;

for(int i = 2; i<=n; i++){

int carry = 0;

for(int j = 0; j < f_size; j++){
    
    int s = f[j]*i + carry;

    f[j] = s%10;
    carry = (s-s%10)/10;
    }
   
    while(carry){
        f_size++;
        f[f_size-1] = carry%10;
        carry = carry/10;
        
    }
    }
    for(int i = f_size-1; i >= 0; i--){
    cout << f[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
