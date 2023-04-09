#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
#include "life.h"
#include "animal.h"
using namespace std;


CAnimal::CAnimal(int iAge, string sName ){
            m_iAge = iAge;
            m_sName = sName;
        }
void CAnimal:: cPrint(int val)
        {
            if(val == 0) {
            cout<<"Animal" <<" "<<m_sName<< " is running"<<endl;
        }
        else if(val == 1) {
            cout<<"Animal is eating"<<endl;
        }
        else if(val == 2) {
            cout<<"Sorry Animal can not readng"<<endl;
        }
        else {
            cout<<"Not a valid action for a Human"<<endl;
        }
     
        
    }
string CAnimal::get_NAME(){
            return m_sName;
    }
        
int CAnimal::get_Age(){
            return m_iAge;
    }



