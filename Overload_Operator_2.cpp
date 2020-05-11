//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator+(Complex& k, Complex& j) {
        int s = k.a+j.a;
        int t = k.b+j.b;
        Complex c;
        string ss = to_string(s)+"+i"+to_string(t);
        c.input(ss);
        return c; 
}

Complex operator+(const Complex& k, const Complex& j) { 
    return { k.a + j.a, k.b + j.b };
}

ostream& operator<<(ostream& out, Complex& c) {
    cout << c.a << "+i" << c.b <<endl;
    return out;
}
