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
