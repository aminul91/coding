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





        
        CAnimalDatabase::CAnimalDatabase(){};
        CAnimalDatabase::CAnimalDatabase(string m_sanmailName, CAnimal *p_Animal){
        
        animalMap.insert(pair<string, CAnimal*>(m_sanmailName, p_Animal));
        }
        
        void CAnimalDatabase::mapPrint()
            {
                for (auto it = animalMap.begin(); it != animalMap.end(); ++it) {
                        std::cout << it->first << ", " << it->second->get_Age()<< '\n';
                      }
            }
        
       


    
    




