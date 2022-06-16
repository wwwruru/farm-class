#ifndef HORSE_H
#define HORSE_H
#include "Animal.h"

class Horse:public Animal
{
public:
    Horse();
    std::string getAnimalName() override;
    size_t getLegsCount() override;
};

#endif // HORSE_H
