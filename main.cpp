#include <iostream>
#include "animals.h"
#include "Horse.h"
#include "People.h"
#include "Snake.h"
#include <list>
#include <random>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    list <Animals> animal;

    while (true)
    {
        cout << "################################### "<< endl;
        cout << "1: Add horse "<< endl;
        cout << "2: Add snake "<< endl;
        cout << "3: Add people "<< endl;
        cout << "4: Output info "<< endl;
        cout << "5: Delite random animal "<< endl;
        cout << "?: Other to get out "<< endl;
        cout << "################################### "<< endl;

        cout << "Enter number : "<< endl;
        scanf("%d", &a);

        switch (a) {
        case 1:
            {
                animal.push_front(Horse());
            }
            break;
        case 2:
            {
                animal.push_front(Snake());
            }
            break;
        case 3:
            {
                animal.push_front(People());
            }
            break;
        case 4:
            {
                if (animal.size() == 0)
                    cout << "no animals "<< endl;
                else
                    for (Animals n : animal) {
                        n.Output();
                }
            }
            break;
        case 5:
            {
                if (animal.size() == 0)
                    cout << "no animals "<< endl;
                else{
                    int r = rand() % animal.size();
                    list<Animals>::iterator it = animal.begin();
                    advance(it,r);
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
