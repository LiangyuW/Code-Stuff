template <class T>
class AddElements{
    T element1;
    T element2;

    public:
        AddElements(T arg1) {
            element1 = arg1;
        }
        T add(T arg2) {
            return element1+arg2;
        }
};

// class template specialization:

template<>
class AddElements<string>{
    string s;

    public:
        AddElements(string arg){
            s = arg;
        }
        string concatenate(string t) {
            s = s+t;
            return s;
        }
};


