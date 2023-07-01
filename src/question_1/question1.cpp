#include <iostream>
#include <string>
#include <cmath>
#include "question1.h"

float get_dna_p_distance(const std::string& dna_1, const std::string& dna_2)
{




    float x = dna_1.size();
    int j = 0;
    int count = 0;

    for(int i=0; i < x; i++)
    {

        if(dna_1[i] != dna_2[j])
        {
            //std::cout<< dna_1[i] << dna_2[j]<<"\n";//
            count++;
            j++;
        }
        else
            j++;
    }


    double z = count / x ;

    double zf = round(z*10000)/10000;


    std::cout<< "the result is "<<zf;




    return zf;
}











bool test_config()
{
    return true;
}