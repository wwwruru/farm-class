#include "Animal.h"
#include <iostream>

Animal::Animal()
{
}

void Animal::Output()
{
    std::cout << "Animal: " << getAnimalName() << "\tfoot: " << getLegsCount() << std::endl;
}