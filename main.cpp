#include <iostream>
#include "Animal.h"
#include "Horse.h"
#include "People.h"
#include "Snake.h"
#include <list>
#include <random>

using namespace std;

list <Animal*> animal;

void addAnimal(Animal* Animals)
{
    animal.push_front(Animals);
}

int main(int argc, char *argv[])
{
    int a;

    while (true)
    {
        cout << "################################### "<< endl;
        cout << "1: Add horse "<< endl;
        cout << "2: Add snake "<< endl;
        cout << "3: Add people "<< endl;
        cout << "4: Output info "<< endl;
        cout << "5: Delete random animal "<< endl;
        cout << "?: Other to get out "<< endl;
        cout << "################################### "<< endl;

        cout << "Enter number : "<< endl;
        cin >> a;

        switch (a) {
        case 1:
            {
                addAnimal(new Horse());
            }
            break;
        case 2:
            {
                addAnimal(new Snake());
            }
            break;
        case 3:
            {
                addAnimal(new People());
            }
            break;
        case 4:
            {
                if (animal.size() == 0)
                    cout << "no animals "<< endl;
                else
                for (Animal *n : animal) 
                    n->Output();  
            }
            break;
        case 5:
            {
                if (animal.size() == 0)
                    cout << "no animals "<< endl;
                else{
                    int r = rand() % animal.size();
                    list<Animal*>::iterator it = animal.begin();
                    advance(it,r);
                    Animal*x = *it;
                    cout << "del : ";
                    x->Output();
                    delete x;
                    animal.erase(it);
                }
            }
            break;
        default:
            {
                exit(1);
            }
            break;
        }
    }
    return 0;
}

