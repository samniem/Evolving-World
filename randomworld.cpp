#include <iostream>
#include "randomworld.h"
using namespace std;

void Randomworld::printWorld()
{
    for(int x = 0; x < 9; x++)
    {
        for(int y = 0; y < 9; y++)
        {
            cout << arr[x][y] << "";
        }
        cout << endl;
    }
}

void Randomworld::initArr()
{
    for(int x = 0; x < 9; x++)
    {
        for(int y = 0; y < 9; y++)
        {
            arr[x][y] = '*';
        }
    }
}

void Randomworld::evolveWorld()
{
    int x;
    int y;
    int evalue;
    for(int a = 0; a < 3; a++)
    {
        x = rand()%9;
        y = rand()%9;
        evalue = rand()%4;
        changeChar(x,y,evalue);
    }
    cout << endl << endl;
}

void Randomworld::changeChar(int x, int y, int evalue)
{
    switch(evalue)
    {
    case 0:
        arr[x][y] = '&';
        break;
    case 1:
        arr[x][y] = '#';
        break;
    case 2:
        arr[x][y] = '@';
        break;
    default:
        arr[x][y] = '/';
    }
}
Randomworld::Randomworld()
{
    //ctor
    initArr();
}

