#include <iostream>
using namespace std;


template<typename T>
T getmax(T x,T y)
{
  if(x>y)
    return x;
  else 
    return y;
}

int main()
{
  int x=100;int y=200;
  cout<<getmax<int>(x,y)<<endl;
  char p='a';char q='b';
  cout<<getmax<char>(p,q)<<endl;
}
