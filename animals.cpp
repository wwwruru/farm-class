#include "animals.h"
#include <iostream>

Animals::Animals()
{
}

void Animals::Output()
{
    std::cout << "Animal: " << getAnimalName() << "\tfoot: " << getLegsCount() << std::endl;
}