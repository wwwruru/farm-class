#ifndef HORSE_H
#define HORSE_H
#include "animals.h"

class Horse:public Animals
{
public:
    Horse();
    std::string getAnimalName() override;
    size_t getLegsCount() override;
};

#endif // HORSE_H
