#include <iostream>
#include "globals.h"
#include "topX.h"

using namespace std;

void topX()
{
    for(int i=0; i<10; i++)
    {
        cout << gry[i].tytul << ", ";
        cout << gry[i].gatunek << ", ";
        cout << gry[i].ocena << ", ";
        cout << gry[i].rok << endl;
    }
    cout << "\n";
}
