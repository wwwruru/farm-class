#include "animals.h"
#include <iostream>

std::string animal;
int colfoot;
Animals::Animals()
{
    animal = "animal";
    colfoot = 0;
}
void Animals::Output()
{
    std::cout << "Animal: " << animal << "\tfoot: " << colfoot << std::endl;
}
