#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
#include "life.h"
#include "animal.h"
#include "human.h"
#include "animaldatabase.h"
using namespace std;




        void CHuman::cPrint(int val)
        {
           if(val == 0) {
            cout<<"Human is running"<<endl;
        }
        else if(val == 1) {
            cout<<"Human is eating"<<endl;
        }
        else if(val == 2) {
            cout<<"Human is readng"<<endl;
        }
        else {
            cout<<"Not a valid action for a Human"<<endl;
        }
     
        
        }

    
    




