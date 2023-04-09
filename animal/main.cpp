#include <iostream>
#include <string>
#include <list>
#include "life.h"
#include "animal.h"
#include "human.h"
#include "animaldatabase.h"
using namespace std;










int main()
{   
    string m_sanmailNamet,m_sanmailNamel,m_sanmailNamee;
    CHuman *p_Human = new CHuman();
    CLife *ptr_Life = new CLife();
    ptr_Life->cPrint(0);
    
    ptr_Life = dynamic_cast<CHuman*>(p_Human);
    ptr_Life->cPrint(0);
    CAnimal *p_Animalt = new CAnimal(20,"tiger");
    CAnimal *p_Animall = new CAnimal(30,"lion");
    CAnimal *p_Animale = new CAnimal(60,"elefant");
    m_sanmailNamet = p_Animalt->get_NAME();
    m_sanmailNamel = p_Animall->get_NAME();
    m_sanmailNamee = p_Animale->get_NAME();
    CAnimalDatabase ob_animalDatabaset(m_sanmailNamet, p_Animalt);
    CAnimalDatabase ob_animalDatabasel(m_sanmailNamel, p_Animall);
    CAnimalDatabase ob_animalDatabasee(m_sanmailNamee, p_Animale);
    CAnimalDatabase mapOutput;
    mapOutput.mapPrint();
    
    return 0;
}
