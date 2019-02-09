#ifndef RANDOMWORLD_H
#define RANDOMWORLD_H
#include <ctime>
#include <cstdlib>
using namespace std;

class Randomworld
{
    public:
        Randomworld();

        void printWorld();


        void initArr();

        void evolveWorld();

        void changeChar(int x, int y, int evalue);

    private:
        char arr[9][9];
};

#endif // RANDOMWORLD_H
