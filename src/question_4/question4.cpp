#include <iostream>
#include <vector>
#include "question4.h"



std::vector <double> get_cookie_ingredients(int cookie)
{

    std::vector<float> ingredients = {0.03125, 0.0208333333, 0.057291667};

    std::vector<double> result;


    for (auto i = ingredients.begin(); i != ingredients.end(); i++)
    {
        double x =  *i * cookie;
        
        for(int j = 0; j < 1; j++)
        {
            result.push_back(x);
        } 

    }

    for (auto it = result.begin(); it != result.end(); it++)
    {
        std::cout << "Cups of Sugar " << it[0] << std::endl;
        std::cout << "Cups of Butter " << it[1] << std::endl;
        std::cout << "Cups of Flour " << it[2] << std::endl;
        break;
    }

return result;
}





















bool test_config()
{
    return true;
}