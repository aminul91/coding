#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
using namespace std;



class CLife
{
public:
    int m_iAge,m_iWeight;   //attribute should be private all the time 
    string m_sName;
    
    virtual void cPrint(int val);
   
    
    //TODO if there a virtual method there should have a virtual destructor otherwise compilation error may occur
    
    virtual ~CLife();
    
    
}; 