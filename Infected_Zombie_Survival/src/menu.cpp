#include "menu.h"
#include "resources.h"
#include "base.h"
#include "save.h"
#include <iostream>
#include <windows.h>
using namespace std;

void menu()
{
    int selection = 1;
    for( ; ; )
    {

        clearScreen();
        if(GetAsyncKeyState(VK_SPACE) && selection <= 1)
        {
            newgame();
        }
        else if(GetAsyncKeyState(VK_SPACE) && selection >= 2)
        {
            loadgame();
        }
        if(GetAsyncKeyState('S'))
        {
            selection = selection + 1;
            if(selection < 1)
            {
                selection = 1;
            }
        }
        else if(GetAsyncKeyState('W'))
        {
            selection = selection - 1;
            if(selection > 3)
            {
                selection = 3;
            }
        }
        if(selection <= 1)
        {
            cout << "                                                                                      " << endl;
            cout << "                                                                      New Game <      " << endl;
            cout << "                                                                      Load Game       " << endl;
            continue;
        }
       else if(selection >= 2)
        {
            cout << "                                                                                      " << endl;
            cout << "                                                                      New Game        " << endl;
            cout << "                                                                      Load Game <     " << endl;
            continue;
        }

        Sleep(100);
    }
}

