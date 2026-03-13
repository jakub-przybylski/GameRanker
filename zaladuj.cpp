#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

#include "globals.h"
#include "zaladuj.h"

using namespace std;

void zaladuj(string filename)
{
    fstream plik;
    plik.open(filename.c_str(),ios::in);

    if(plik.good()==false)
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        exit(0);
    }

    string linia;
    getline(plik,linia);

    while(getline(plik,linia))
    {
        stringstream ss(linia);

        string tymOcena, tymRok;

        getline(ss,gry[n].tytul,',');
        getline(ss,gry[n].gatunek,',');
        getline(ss,tymOcena,',');
        getline(ss,tymRok,',');

        gry[n].ocena = atof(tymOcena.c_str());
        gry[n].rok = atoi(tymRok.c_str());

        n++;
    }
}
