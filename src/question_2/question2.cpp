#include <iostream>
#include <string>

#include "question2.h"



bool is_palindrome(const std::string& str)
{


    int x = str.length()-1;

    for(int i=0; i <= x; i++, x--)
    {
        if(str[i] != str[x])
        {
            return false;
        }

    }

    return true;
}















bool test_config()
{
    return true;
}