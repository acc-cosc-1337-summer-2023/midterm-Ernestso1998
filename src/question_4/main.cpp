#include <iostream>
#include <vector>
#include "question4.h"

int main()
{

    int cookie;
    bool check = true;
    char input;
    
    while(check)
    {
        
        std::cout<<"Please enter the amount of cookies: ";
        std::cin>> cookie;

        get_cookie_ingredients(cookie);
        




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