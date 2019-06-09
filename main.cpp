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

#include <bits/stdc++.h>
#include "menuItems.h"
#include "functionalities.h"

using namespace std;

int main()
{
    int selection[2];
    userData player;

    showMenu(selection);

    // Menu Handling
    if (selection[0] == 1)
    {
        if (selection[1] == 1)
        {
            startGame(5, player);
        }
        else if (selection[1] == 2)
        {
            startGame(4, player);
        }
        else if (selection[1] == 3)
        {
            startGame(3, player);
        }
    }
    else if (selection[0] == 2)
    {
        if (selection[1] == 1)
        {
            player.saveData();
        }
        else if (selection[1] == 2)
        {
            player.loadData();
        }
        
    }

    return 0;
}

// Code to get random numbers from the function:
// int *p;

// p = getUniqueRandomNumbers(4);
// int r[4];

// for (int i = 0; i < 4; ++i)
// {
//     r[i] = *(p + i);
// }
