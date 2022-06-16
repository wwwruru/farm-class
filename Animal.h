#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
public:
    Animal();
    void Output();
    virtual std::string getAnimalName() = 0;
    virtual size_t getLegsCount() = 0;
};

#endif // ANIMAL_H
