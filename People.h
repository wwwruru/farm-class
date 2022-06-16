#ifndef PEOPLE_H
#define PEOPLE_H
#include "animals.h"

class People:public Animals
{
public:
    People();
    std::string getAnimalName() override;
    size_t getLegsCount() override;
};

#endif // PEOPLE_H
