#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException: public exception {
    private:
        int k;

    public:
        BadLengthException(int n) {
            k = n;
        }

        int what() {
            return k;
        }
};

void process_input(int n) {
    try{
    int d = largest_proper_divisor(n);
    cout << "result=" << d << endl;
    }
    catch(invalid_argument &e){
        cout << e.what() << endl;
    }
    
    cout << "returning control flow to caller" << endl;
}
