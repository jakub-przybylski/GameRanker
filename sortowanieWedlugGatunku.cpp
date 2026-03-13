#include <algorithm>
#include "globals.h"
#include "sortowanieWedlugGatunku.h"

using namespace std;

void sortowanieWedlugGatunku()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (gry[j].gatunek > gry[j + 1].gatunek)
            {
                swap(gry[j], gry[j + 1]);
            }
        }
    }
}
