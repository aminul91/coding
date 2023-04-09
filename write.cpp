// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile ("time.txt");
  int date =  23;
  int month = 7;
  int year = 2023;
  if (myfile.is_open())
  {
    int count_i = 0;
    while(count_i<3)
    {
    if(count_i==0)
        myfile <<date << '\n';
    else if(count_i==1)
        myfile <<month << '\n';
    else if(count_i==2)
        myfile <<year << '\n';
    count_i++;
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}