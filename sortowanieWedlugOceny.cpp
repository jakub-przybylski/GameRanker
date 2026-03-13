#include <algorithm>
#include "globals.h"
#include "sortowanieWedlugOceny.h"

using namespace std;

void sortowanieWedlugOceny()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(gry[j].ocena < gry[j+1].ocena)
            {
                swap(gry[j], gry[j+1]);
            }
        }
    }
}
