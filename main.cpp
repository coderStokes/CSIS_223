



  
//#include "stdafx.h"
//#include <conio.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

    
    class Animals
    {
    private:
        string food;
    public:
        void eat()
        {
            cout << "As the animal I am, I usually eat " << food << endl;
        }
        void set_food(string f)
        {
            food = f;
        }
        
    };
    
class Reptiles: public Animals
    {
        string eat()
        {
            return "flies";
        }
        
    };


int main(int argc, const char * argv[])
{
    
    Reptiles reptile;
    Animals animal;
    
    reptile.set_food("flies");
    animal.eat();
    
    
    //_getch();
    system("Pause");
    return 0;
}


