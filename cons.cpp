#include <iostream>
using namespace std;

class MyClass {   

public: 
    int  p,r;   
    MyClass() {  
      cout << "Hello World!"<<endl ;
    }
    MyClass(int x) {  
      r=x;
    }
    int assign_op(){
      p=r;
      return p;
    }
    
};

int main() {
  int m,g;
  MyClass abc(45); 
  g = abc.assign_op();
  cout<<"g:abc"<<" "<<g<<endl;
  MyClass er(15);
  m = er.assign_op();
  cout<<"m:er"<<" "<<m<<endl;
  return 0;
}
