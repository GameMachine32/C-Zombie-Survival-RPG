#include "zombie.h"
#include "journey.h"
#include "resources.h"
#include "base.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;



void encounter()
{

          system("cls");
          int action;
          int zhp = 30;
          int totaldamage;
          int zdamage;
          bool dead = false;
          int power;
          int swingspeed;

         system("COLOR 47");
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << " 0                 0      " << endl;
         cout << "-|-               -|-    " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "  0                0        " << endl;
         cout << " -|-              -|-       " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "   0               0         " << endl;
         cout << "  -|-             -|-        " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "   0               0         " << endl;
         cout << "  -|-             -|-        " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "    0              0          " << endl;
         cout << "   -|-            -|-         " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "     0             0            " << endl;
         cout << "    -|-           -|-           " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "      0            0            " << endl;
         cout << "     -|-          -|-           " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "       0           0             " << endl;
         cout << "      -|-         -|-            " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "        0          0              " << endl;
         cout << "       -|-        -|-             " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "         0         0              " << endl;
         cout << "        -|-       -|-             " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "          0        0               " << endl;
         cout << "         -|-      -|-              " << endl;
         cout << "########################" << endl;
         Sleep(30);
         clearScreen();
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "                        " << endl;
         cout << "           0       0      " << endl;
         cout << "          -|-     -|-     " << endl;
         cout << "########################" << endl;
         Sleep(30);
         while(dead == false)
         {
          if(hp <= 0)
          {
              system("COLOR 0F");
              cout << "You Died! :(" << endl;
              system("pause");
              system("cls");
              hp = 100;
              kilom = 0;
              base();
          }
          if(zhp <= 0)
          {
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "            0      0   " << endl;
          cout << "           -|-    -|-  " << endl;
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
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "            0      0   " << endl;
          cout << "           -|-    -|-  " << endl;
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
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "            0      0   " << endl;
          cout << "           -|-    -|-  " << endl;
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
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "             0          " << endl;
          cout << "            -|-         " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "              0          " << endl;
          cout << "             -|-         " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "               0        " << endl;
          cout << "              -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                0        " << endl;
          cout << "               -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                 0        " << endl;
          cout << "                -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                  0        " << endl;
          cout << "                 -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                   0        " << endl;
          cout << "                  -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                    0        " << endl;
          cout << "                   -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                     0        " << endl;
          cout << "                    -|-       " << endl;
          cout << "########################" << endl;
          Sleep(30);
          clearScreen();
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                      0        " << endl;
          cout << "                     -|-       " << endl;
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
          Sleep(200);
          hp = hp + zdamage;
          kills++;
          dead = true;
          walk();
          }
          clearScreen();
          if(ammo <= 0)
          {
              cout << "You ran out of ammo! You must flee back to your base." << endl;
              system("pause");
              ammo = 100;
              base();
          }
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                        " << endl;
          cout << "                 "<<zhp<<"/30" << endl;
          cout << "            0      0      " << endl;
          cout << "           -|-    -|-     " << endl;
          cout << "########################" << endl;
          Sleep(30);
          cout << "You encountered a zombie!" << endl;
          cout << "Your hp: " << hp << "/100" << endl;
          cout << "Ammo left: " << ammo << endl;
          cout << "1: Attack" << endl;
          cin >> action;
          if(action == 1)
          {
              power = rand() % 6 + 2;
              swingspeed = rand() % 6 + 1;
              totaldamage = power + swingspeed;
              zhp = zhp - totaldamage;
              zdamage = rand() % 15 + 5;
              hp = hp - zdamage;
              ammo--;
              Sleep(90);
              clearScreen();
              cout << "                        " << endl;
              cout << "                        " << endl;
              cout << "                   "<<totaldamage<< endl;
              cout << "                 "<< endl;
              cout << "            0      0      " << endl;
              cout << "           -|-    -|-     " << endl;
              cout << "########################" << endl;
              Sleep(90);
              clearScreen();
              cout << "                   "<<totaldamage << endl;
              cout << "                        "<< endl;
              cout << "                        "<< endl;
              cout << "                       " << endl;
              cout << "            0      0      " << endl;
              cout << "           -|-    -|-     " << endl;
              cout << "########################" << endl;
              cout << endl;
              Sleep(90);
              system("cls");
              clearScreen();
        }
    }
}

void testChance()
{
    int chance;
    chance = rand() % 20 + 1;
    if(chance == 7 || chance == 8 || chance == 9)
    {
        encounter();
    }
}
