/**
    A Football game made using random numbers, much like Ludo.
    Copyright (C) 2019  Snehit Sah

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Contact the author : snehitsah[at]gmail[dot]com
**/

#ifndef _MENUTEMS_
#define _MENUTEMS_

#include <iostream>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CP;

void gotoXY(int x, int y)
{
    CP.X = x;
    CP.Y = y;
    SetConsoleCursorPosition(console, CP);
}

void showMenu()
{
    /**Code to print a menu with following options:
     * 1. Start Game
     * 2. Load/Save Data
     * 3. Store
     * 4. Help
     * 5. About
     */

     gotoXY(15, 4);
     cout<<"Select an option below: ";

     gotoXY(20, 6);
     cout<<"1.     Start Game";
     gotoXY(20, 7);
     cout<<"2.     Load/Save Game";
     gotoXY(20, 8);
     cout<<"3.     Store";
     gotoXY(20, 9);
     cout<<"4.     Help";
     gotoXY(20, 10);
     cout<<"5.     About";
}

#endif
