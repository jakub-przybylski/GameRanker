#include <iostream>
#include "globals.h"
#include "wyswietlWszystko.h"

using namespace std;

void wyswietlWszystko()
{
    for(int i=0; i<n; i++)
    {
        cout << gry[i].tytul << ", ";
        cout << gry[i].gatunek << ", ";
        cout << gry[i].ocena << ", ";
        cout << gry[i].rok << endl;
    }
    cout << "\n";
}
