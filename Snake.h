#ifndef SNAKE_H
#define SNAKE_H
#include "Animal.h"

class Snake:public Animal
{
public:
    Snake();
    std::string getAnimalName() override;
    size_t getLegsCount() override;
};

#endif // SNAKE_H
