#include <iostream>
using namespace std;

class pointClass {   
    int*  x;   
public: 
    pointClass(){}
    pointClass(int xx){
      x= &xx;
    }
   
    
    void print(){
      cout<<*x<<endl;
     
    }

   ~pointClass(){delete x;}

    pointClass operator = (const pointClass &rhs) {
      if (this != &rhs)
        *x = *rhs.x;
      return *this;
    }
    
};

int main() {
  int fix=20;
  pointClass p1(9),p2(5);
  p1=p2;
  p1.print();
  p2.print();
 
  return 0;
}
