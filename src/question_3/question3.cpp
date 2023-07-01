#include <iostream>

#include "question3.h"




double get_kinetic_energy(int m, int v)
{

    double ke;

    ke = 1.0/2.0 *m*v*v;

    std::cout<< "This object has this amount of kinetic energy: "<< ke <<std::endl;

    return ke;
}






















bool test_config()
{
    return true;
}