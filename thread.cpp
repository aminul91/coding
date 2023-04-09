// Online C++ compiler to run C++ program online
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;
int iEvensum = 0;
int iOddsum = 0;

void Findsumeven(int startnum, int stopnum)
{
    
    for(int i=startnum ; i<= stopnum; i++)
    {
        
        if(i%2 == 0)
        {
            iEvensum = iEvensum+i;
        }
    }
  
    
}

void Findsumodd(int startnum, int stopnum)
{
    
    for(int i=startnum; i<= stopnum; i++)
    {
     
        if(i%2 != 0)
        {
            iOddsum = iOddsum+i;
        }
    }
   
    
}

int main() {
    int start = 2,stop=12;
    thread t1(Findsumeven,start,stop);
    thread t2(Findsumodd,start,stop);
    t1.join();
    t2.join();

    cout<<iEvensum<<endl;
    cout<<iOddsum<<endl;
    return 0;
}