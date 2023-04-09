#include <iostream>
using namespace std;

class CBook{
    int *x;
public:
    int id;
    string title;
    float price;

    void set(int id_val=0) {
        *x = id_val;
    }

    void print() {
        cout<<*x<<endl;
    }

    CBook operator = (const CBook& rhs ) {
        if(this != &rhs)
            *x= *rhs.x;
        return *this;
    }

};


int main() {

   CBook b1,b2,b3;
   b1.set(5);
   b1.title="ffgfg";
   b2 = b1;
   b1.set(7);
   b1.print();
   b2.print();
   return 0;

}
