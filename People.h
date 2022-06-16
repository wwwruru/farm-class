#ifndef PEOPLE_H
#define PEOPLE_H
#include "Animal.h"

class People:public Animal
{
public:
    People();
    std::string getAnimalName() override;
    size_t getLegsCount() override;
};

#endif // PEOPLE_H
