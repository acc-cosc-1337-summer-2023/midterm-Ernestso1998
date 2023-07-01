#include <iostream>

#include "question3.h"



int main()
{
    int m;
    int v;
    bool check = true;
    char input;
    
    while(check)
    {
        std::cout<<"Please enter the objects mass in kilograms: ";
        std::cin>> m;

        std::cout<<"Please enter the objects velocity in meters per second: ";
        std::cin>> v;


        get_kinetic_energy(m, v);


        std::cout<<"Continue? Enter N for no or Y for yes: ";
        std::cin>> input;
        
        if(input == 'Y'|| input =='y'){
            check = true;
        }else if(input =='N'||input =='n'){
            check = false;
            continue;
        }
    }






    return 0;
}