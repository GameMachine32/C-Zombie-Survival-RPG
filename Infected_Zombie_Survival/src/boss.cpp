#include "boss.h"
#include "resources.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int fightOption;
int damage;
int bhp = 100;
void encounterBoss()
{
         system("cls");
         clearScreen();
         Sleep(60);
         cout << "                           " << endl;
         cout << "                /----\     " << endl;
         cout << "               |      |    " << endl;
         cout << "               |      |    " << endl;
         cout << "               \      /    " << endl;
         cout << "                \    /     " << endl;
         cout << "                 |--|      " << endl;
         cout << "           ------|  |------" << endl;
         cout << "                 |--|      " << endl;
         cout << "                /    \     " << endl;
         cout << "               /      \    " << endl;
         cout << " 0            |        |   " << endl;
         cout << "-|-           |        |   " << endl;
         cout << "############################" << endl;
         clearScreen();
         Sleep(60);
         cout << "                           " << endl;
         cout << "                /----\     " << endl;
         cout << "               |      |    " << endl;
         cout << "               |      |    " << endl;
         cout << "               \      /    " << endl;
         cout << "                \    /     " << endl;
         cout << "                 |--|      " << endl;
         cout << "           ------|  |------" << endl;
         cout << "                 |--|      " << endl;
         cout << "                /    \     " << endl;
         cout << "               /      \    " << endl;
         cout << "  0           |        |   " << endl;
         cout << " -|-          |        |   " << endl;
         cout << "############################" << endl;
         clearScreen();
         Sleep(60);
         cout << "                           " << endl;
         cout << "                /----\     " << endl;
         cout << "               |      |    " << endl;
         cout << "               |      |    " << endl;
         cout << "               \      /    " << endl;
         cout << "                \    /     " << endl;
         cout << "                 |--|      " << endl;
         cout << "           ------|  |------" << endl;
         cout << "                 |--|      " << endl;
         cout << "                /    \     " << endl;
         cout << "               /      \    " << endl;
         cout << "   0          |        |   " << endl;
         cout << "  -|-         |        |   " << endl;
         cout << "############################" << endl;
         clearScreen();
         Sleep(60);
         cout << "                           " << endl;
         cout << "                /----\     " << endl;
         cout << "               |      |    " << endl;
         cout << "               |      |    " << endl;
         cout << "               \      /    " << endl;
         cout << "                \    /     " << endl;
         cout << "                 |--|      " << endl;
         cout << "           ------|  |------" << endl;
         cout << "                 |--|      " << endl;
         cout << "                /    \     " << endl;
         cout << "               /      \    " << endl;
         cout << "    0         |        |   " << endl;
         cout << "   -|-        |        |   " << endl;
         cout << "############################" << endl;
         clearScreen();
         Sleep(60);
         for( ; ; )
         {
         cout << "                           " << endl;
         cout << "                /----\     " << endl;
         cout << "               |      |    " << endl;
         cout << "               |      |    " << endl;
         cout << "               \      /    " << endl;
         cout << "                \    /     " << endl;
         cout << "                 |--|      " << endl;
         cout << "           ------|  |------" << endl;
         cout << "                 |--|      " << endl;
         cout << "                /    \     " << endl;
         cout << "               /      \    " << endl;
         cout << "      0       |        |   " << endl;
         cout << "     -|-      |        |   " << endl;
         cout << "############################" << endl;
         clearScreen();
         Sleep(60);
         cout << "You encountered the boss!" << endl;
         cout << "Hp: " << hp << "/100" << endl;
         cout << "Medipacks left: " << medipacks << endl;
         cout << "Ammo left: " << ammo << endl;
         cout << "Commands:" << endl;
         cout << "1: Attack" << endl;
         cout << "2: Heal yourself";
         cin >> fightOption;
         Sleep(60);


         }
}
void testBoss()
{
    if(kilom > 70 && not(kilom > 72))
    {
        encounterBoss();
    }
}
