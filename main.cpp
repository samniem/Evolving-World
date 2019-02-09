#include <iostream>
#include "randomworld.h"
using namespace std;

int main()
{
    srand(time(0));
    Randomworld world;
    world.initArr();
    world.printWorld();
    for(int a = 0; a < 40; a++)
    {
        world.evolveWorld();
        world.printWorld();
    }
}
