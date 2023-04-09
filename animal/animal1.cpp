#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>
using namespace std;

enum ShotType {
  eRUN=0,
  eEAT,
  eREAD
};


class CLife
{
public:
    int m_iAge,m_iWeight;   //attribute should be private all the time 
    string m_sName;
    
    virtual void cPrint(int val)
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
    
    virtual ~CLife(){}
    
    
}; 

class CHuman:public CLife
{
    public:
        void cPrint(int val)
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
        
};

class CAnimal:public CLife
{
    public:
        CAnimal(int iAge, string sName ){
            m_iAge = iAge;
            m_sName = sName;
        }
        void cPrint(int val)
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
        string get_NAME(){
            return m_sName;
        }
        
        int get_Age(){
            return m_iAge;
        }
};

map<string, CAnimal*> animalMap;
class CAnimalDatabase
{
   public:
        
         CAnimalDatabase(){ // contructor overload
        
        }
        CAnimalDatabase(string m_sanmailName, CAnimal *p_Animal){
        
        animalMap.insert(pair<string, CAnimal*>(m_sanmailName, p_Animal));
        }
        
        void mapPrint()
            {
                for (auto it = animalMap.begin(); it != animalMap.end(); ++it) {
                        std::cout << it->first << ", " << it->second->get_Age()<< '\n';
                      }
            }
        
       
};

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
