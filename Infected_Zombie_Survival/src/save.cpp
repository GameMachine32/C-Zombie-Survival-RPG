#include "save.h"
#include "resources.h"
#include "base.h"
#include "journey.h"
#include <fstream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
ofstream save;
ifstream load;
void newgame()
{
    hp = 100;
    medipacks = 4;
    ammo = 200;
    system("cls");
    clearScreen();
    base();
}

void savegame()
{
    save.open("g1.dat");
    save << hp << " " << medipacks << " " << ammo << " " << kilom << " " << kills;
    save.close();
    Sleep(1);
    exit(0);
}

void loadgame()
{
    int lhp, lmedipacks, lammo, lkills;
    double lkilom;
    load.open("g1.dat");
    load >> lhp >> lmedipacks >> lammo >> lkilom >> lkills;
    hp = lhp;
    medipacks = lmedipacks;
    ammo = lammo;
    kilom = lkilom;
    kills = lkills;
    system("cls");
    clearScreen();
    if(kilom <= 0)
    {
        base();
    }

    else if(kilom > 0)
    {
        walk();
    }
}
