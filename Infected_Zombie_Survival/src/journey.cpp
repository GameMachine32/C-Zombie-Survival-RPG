#include "journey.h"
#include "base.h"
#include "zombie.h"
#include "town.h"
#include "resources.h"
#include "save.h"
#include "boss.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void walk()
{
    system("COLOR 1F");
    char choice;
    int chance;
    for( ; ; )
    {
         system("cls");
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << " 0                      " << endl;
         cout << "-|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "  0                      " << endl;
         cout << " -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "   0                      " << endl;
         cout << "  -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "   0                      " << endl;
         cout << "  -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "    0                      " << endl;
         cout << "   -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "     0                      " << endl;
         cout << "    -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "      0                      " << endl;
         cout << "     -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "       0                      " << endl;
         cout << "      -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "        0                      " << endl;
         cout << "       -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "         0                      " << endl;
         cout << "        -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "          0                      " << endl;
         cout << "         -|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;https://web.roblox.com/games/11998748/The-Roblox-Museum-of-2006-2008-Updated
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "           0            " << endl;
         cout << "          -|-           " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "            0           " << endl;
         cout << "           -|-          " << endl;
         cout << "########################" << endl;
         Sleep(30);
         cout << "Kilometors from base: " << kilom << endl;
         cout << "You are in the middle of the wasteland." << endl;
         cout << "Your hp: " << hp << "/100" << endl;
         cout << "Medipacks left: " << medipacks << endl;
         cout << "Ammo left: " << ammo << endl;
         cout << "Zombies killed: " << kills << endl;
         cout << "Commands: " << endl;
         cout << "E: Save and quit. R: Return to base. K: Keep going. M: Heal yourself: ";
         cin >> choice;
         if(choice == 'K')
         {
          system("cls");
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "             0            " << endl;
          cout << "            -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "              0            " << endl;
          cout << "             -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "               0            " << endl;
          cout << "              -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                0            " << endl;
          cout << "               -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                 0            " << endl;
          cout << "                -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                  0            " << endl;
          cout << "                 -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                    0            " << endl;
          cout << "                   -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                     0            " << endl;
          cout << "                    -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                      0            " << endl;
          cout << "                     -|-           " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "########################" << endl;
          kilom = kilom + 0.7;
          testChance();
          lookForTown();
          testBoss();
          Sleep(200);
          continue;
        }
         else if(choice == 'R')
         {
             kilom = 0;
             Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "            0           " << endl;
         cout << "           -|-          " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "           0            " << endl;
         cout << "          -|-           " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "          0             " << endl;
         cout << "         -|-            " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "         0              " << endl;
         cout << "        -|-             " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "        0               " << endl;
         cout << "       -|-              " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "       0                " << endl;
         cout << "      -|-               " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "      0                 " << endl;
         cout << "     -|-                " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "     0                  " << endl;
         cout << "    -|-                 " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "    0                   " << endl;
         cout << "   -|-                  " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "   0                    " << endl;
         cout << "  -|-                   " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "  0                     " << endl;
         cout << " -|-                    " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << " 0                      " << endl;
         cout << "-|-                     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "########################" << endl;
         Sleep(120);
         system("cls");
         base();

         }
         else if(choice == 'M')
         {
             cout << "Use 1 medipack to restore 60 health(Y/N)? ";
             cin >> choice;
             if(choice == 'Y' || choice == 'y')
             {
                 if(hp > 85)
                 {
                     cout << "Your hp is too high to be able to heal yourself." << endl;
                     system("pause");
                     continue;
                 }
                 if(medipacks == 0)
                 {
                     cout << "You dont have any medipacks!" << endl;
                     system("pause");
                     continue;
                 }
                 hp = hp + 60;
                 medipacks--;
                 if(hp > 100)
                 {
                     hp = 100;
                 }
                 cout << "Medipack used. Your health is now " << hp << endl;
                 system("pause");
                 continue;
             }
            else if(choice == 'N' || choice == 'n')
            {
                system("pause");
                continue;
            }
         }
         else if(choice == 'E' || choice == 'e')
         {
             savegame();
         }
    }
}
