#ifndef SNAKE_H
#define SNAKE_H
#include "animals.h"

class Snake:public Animals
{
public:
    Snake();
    std::string getAnimalName() override;
    size_t getLegsCount() override;
};

#endif // SNAKE_H
