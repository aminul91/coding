#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

template < class T1, class T2>
auto maxFind(T1 a, T2 b){
    T2 result;
    if (a>b) {
        result = a;
    }
    else{
        result = b;
    }
    return result;
}
int main() {
    int x = 5,y = 7;
    double p = 6.77,q= 9.345,resultlong,resultInt;
    char pp = 'N', mm = 'R',resultChar; 
    resultInt = maxFind(x,q) ;
    resultlong = maxFind(p,y) ;
    resultChar = static_cast<char>(maxFind<char> (pp,mm)) ;
    cout<<resultInt<<endl;
    cout<<resultlong<<endl;
    cout<<resultChar<<endl;
    return 0;
   
}   