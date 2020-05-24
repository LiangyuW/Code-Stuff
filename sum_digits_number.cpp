    
    int sumDigits(char* s){
        int n = atoi(s);
        int sum = 0;
        while(n!=0){
            sum += n%10;
            n=n/10;
        }
        return sum;
    }
    
    int main()
    {
    char s[] = "252647";
    int k = sumDigits(s);
    cout << k << endl;
    return 0;
    }
