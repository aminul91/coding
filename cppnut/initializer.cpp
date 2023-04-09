// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base {
    int a;
    public:
        Base(int p):a{p}
        {
          
        }
        void bprint()
        {
            cout << a<<endl;
           
        }
};

class Child: public Base {
    int a,b;
    public:
        Child(int p,int q):Base{p},b{q}
        {
          
        }
        void print()
        {
            
            cout << b<<endl;
        }
};

int main() {
    Child c(5,7);
    c.print();
    c.bprint();
    return 0;
}