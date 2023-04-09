#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
using namespace std;



class CAnimal:public CLife
{
    public:
        CAnimal(int iAge, string sName );
        void cPrint(int val);

        string get_NAME();
        
        int get_Age();
};