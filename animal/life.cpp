#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
#include "life.h"
#include "animal.h"
#include "animaldatabase.h"
using namespace std;



    
    virtual void CLife::cPrint(int val)
    {
        if(val == 0) { // TODO Use enum not integer 
            cout<<"Life is running"<<endl;
        }
        else if(val == 1) { // TODO Use enum not integer
            cout<<"Life is eating"<<endl;
        }
        else if(val == 2) { // TODO Use enum not integer
            cout<<"Life is readng"<<endl;
        }
        else {
            cout<<"Not a valid action for a Life"<<endl;
        }
    
    }
    
    //TODO if there a virtual method there should have a virtual destructor otherwise compilation error may occur
    
    virtual ~CLife(){};
    
    




