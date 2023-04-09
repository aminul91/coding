#include <iostream>
using namespace std;

class pointClass {   
    int  x,y,z;   
public: 
    pointClass(){}
    pointClass(int xx, int yy,int zz){
      x= xx;
      y= yy;
      z= zz;

    }
    pointClass operator + (const pointClass& rhs) {
      pointClass p;
      p.x = x + rhs.x+z;
      p.y = y + rhs.y+z;
      p.z = z;
      return p;

    }

    pointClass operator - (const pointClass& rhs) {
      pointClass p;
      p.x = x - rhs.x;
      p.y = y - rhs.y;
      p.z = z;
      return p;

    }
    pointClass operator - () {

      return pointClass(-x,-y,-z);

    }
    void print(){
      cout<<x<<endl;
      cout<<y<<endl;
      cout<<z<<endl;
    }
    
};

int main() {
  int fix=20;
  pointClass p1(9,13,fix),p2(5,7,fix);
  pointClass p3= p1+p2;
  pointClass p4= p1-p2;
  pointClass p5 = -p1;
  p3.print();
  p4.print();
  p5.print();
  return 0;
}
