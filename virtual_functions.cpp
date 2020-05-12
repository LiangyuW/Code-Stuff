class Person {
    protected:
        string name;
        int age;
    public:
        virtual void getdata(){
            cin >> name >> age;
        }
        virtual void putdata(){
            cout << name <<" " << age << endl;
        }
};

class Professor : public Person {
    private:
        int publications;
        static int id;
        int cur_id;
    public:
        Professor() {
            id++;
            cur_id = id;
        }
        void getdata(){
            cin >> name >> age >> publications;

        }

        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id <<endl;
        }

};
int Professor::id = 0;


class Student : public Person {
    private:
        int marks[6];
        static int id;
        int cur_id;
    public:
        Student(){
            id++;
            cur_id = id;
        }
        void getdata() {
            cin  >> name >> age;
            for(int i = 0; i < 6; i++){
                cin >> marks[i];
            }
        }

        void putdata() {
            int sum = 0;
            for(int i = 0; i< 6; i++){
                sum += marks[i];
            }
            cout << name << " " << age << " " << sum << " " << cur_id << endl;
        }

};
int Student::id = 0;

