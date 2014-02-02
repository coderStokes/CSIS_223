



  
//#include "stdafx.h"
//#include <conio.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

    
    class Animals
    {
      
    public:
        string iSay;
        string food;
        void eat()
        {
            iSay = "As the animal I am, I usually eat ";
        }
        void set_food(string f)
        {
            food = f;
        }
        
    };
    
class Reptiles: public Animals
    {
        void eat()
        {
            cout << iSay << food << endl;
        }
        
    };


int main(int argc, const char * argv[])
{
    
    Reptiles reptile;
    Animals animal;
    
    reptile.set_food("flies");
    reptile.Animals::eat();
    
    
    
    //_getch();
    system("Pause");
    return 0;
}


