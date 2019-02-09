#include <iostream>
#include "randomworld.hpp"
using namespace std;

int main()
{
    srand(time(0));
    Randomworld world;
    world.initArr();
    int evolutions;
    cout << "Enter number of evolutions for the World!" << endl;
    cin >> evolutions;
    world.printWorld();
    for(int a = 0; a < evolutions; a++)
    {
        world.evolveWorld();
        world.printWorld();
    }
}
