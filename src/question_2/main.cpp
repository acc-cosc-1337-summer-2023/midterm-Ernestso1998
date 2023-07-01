#include <iostream>
#include <string>

#include "question2.h"




int main()
{


    std::string str;
    char input;
    
    while(true){
        std::cout<<"Please enter a word to check if palindrome: ";
        std::cin>> str;
         
        if (is_palindrome(str))
        {
            std::cout<<"Is a Palindrome"<<"\n";
        }
        else        
            std::cout<<"Not a Palindrome"<<"\n";


        std::cout<<"Continue? Enter N for no or Y for yes: ";
        std::cin>> input;
        
        if(input == 'Y'|| input =='y'){
        return true;
        }else if(input =='N'||input =='n'){
        return false;
    }
    }



    return 0;
}