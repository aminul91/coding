// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base{
    private:
        int &x;
    public:
        Base(int &a):x{a}{
            cout<<x<<endl;
            
        }
        Base &operator = (const Base &obj){x = obj.x; return *this; };
        
        void set(int p){this->x=p;}
        int get(){return this->x;}
        friend void print(Base&);
        friend class printCl;
};

class printCl{
    public:
       void printclass(Base &obj){cout<<obj.x<<endl;} ; // a private variable can be access with friend class
    
};


void print(Base &obj){cout<<obj.x<<endl;} // a private variable can be access with friend func

int main() {
   int *val = new int();
   *val = 20;
   Base b1(*val);
   int x= 30;
   val = &x;
   Base b2(*val);
   b1 = b2;
   print(b1);
   printCl p1;
   p1.printclass(b2);
   x= 50;
   val = &x;
   b1.set(*val);
   int y = b1.get();
   cout<<y<<endl;

    return 0;
}