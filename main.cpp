#include <iostream>
#include <windows.h>
#include <cstdlib>

#include "globals.h"
#include "zaladuj.h"
#include "wyswietlWszystko.h"
#include "sortowanieWedlugOceny.h"
#include "sortowanieWedlugGatunku.h"
#include "topX.h"

using namespace std;

int main()
{
    zaladuj("lista.txt");

    cout << "=============================================" << endl;
    cout << "================ GameRanker =================" << endl;
    cout << "== by Jakub Przybylski & Michal Matulaniec ==" << endl;
    cout << "============ All rights Reserved ============" << endl;
    cout << "=============================================" << endl;

    while(wybor!='5')
    {
        cout << "1. Wyswietl wszystkie gry" << endl;
        cout << "2. Sortuj gry wedlug oceny" << endl;
        cout << "3. Sortuj gry wedlug gatunku " << endl;
        cout << "4. Wygeneruj ranking TOP-X" << endl;
        cout << "5. Zakoncz" << endl;
        cout << "Wybierz: ";
        cin >> wybor;
        cout << "\n";

        switch(wybor)
        {
        case '1': wyswietlWszystko(); break;
        case '2': sortowanieWedlugOceny(); wyswietlWszystko(); break;
        case '3': sortowanieWedlugGatunku(); wyswietlWszystko(); break;
        case '4': sortowanieWedlugOceny(); topX(); break;
        case '5':
            cout << "Dziekujemy za korzystanie z programu!" << endl;
            Sleep(3000);
            exit(0);
        default:
            cout << "Wybrano nie istniejaca opcje!" << endl;
        }
    }

    return 0;
}

