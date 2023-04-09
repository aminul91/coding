#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
#include "life.h"
#include "animal.h"
#include "human.h"
using namespace std;



map<string, CAnimal*> animalMap;
class CAnimalDatabase
{
   public:
        
         CAnimalDatabase();
        
        CAnimalDatabase(string m_sanmailName, CAnimal *p_Animal);
        
        void mapPrint();
        
       
};