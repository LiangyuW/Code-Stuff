//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    private:
        int l, b, h;
    public:
        Box() {
            l = 0;  b = 0;  h = 0;
        }

        Box(int i, int k, int j) {
            l = i;  b = k;  h = j;   
        }

        Box (Box& t){
            l = t.getLength();
            b = t.getBreadth();
            h = t.getHeight();
        }

        int getLength() {
            return l;
        }

        int getBreadth() {
            return b;
        }

        int getHeight() {
            return h;
        }

        long long CalculateVolume(){
            return (long long)l*b*h;
        }
        
        bool operator<(Box& t) {
            int tl = t.getLength();
            int bl = t.getBreadth();
            int hl = t.getHeight();
            if(l < tl || (b < bl && l == tl) || (h < hl && l== tl && b == bl)){
                return true;
            } else {
                return false;
            } 
        }

        friend ostream& operator<<(ostream& out, Box& B);
};

ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() <<" " << B.getBreadth() << " " << B.getHeight();
    return out; 
};

