#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>

class Animals
{
public:
    Animals();
    void Output();
    virtual std::string getAnimalName() = 0;
    virtual size_t getLegsCount() = 0;
};

#endif // ANIMALS_H
