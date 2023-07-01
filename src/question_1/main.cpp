#include <iostream>
#include <string>
#include "question1.h"




int main()

{
    std::string dna_1;
    std::string dna_2;

    std::cout<<"Please Enter the First DNA Strand:";
    std::cin>> dna_1;

    std::cout<<"Please Enter the Second DNA Strand:";
    std::cin>> dna_2;

    get_dna_p_distance(dna_1,dna_2);


    return 0;
}