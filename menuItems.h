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

#include <windows.h>

using namespace std;

/**
 * This header file contains most of the funcitons
 * that are used to build the menus. These functions
 * don't call external function to carry out selected
 * option. Rather, these send back numbers as array
 * elements, based on the user's choice.
 * The selection[] array has been passed as
 * an argument in the showMenu function
 * This example will make things clear:
 * 
 *      Suppose the user selects the first option 'Start Game'
 *      The element '0' of the selection array is set as 1
 *      On the next screen, the user is asked about the difficulty
 *      level. Based on the choice(Easy, Intermediate or difficult),
 *      the element '1' of the selectio array is set as 1, 2, or 3.
 *      So, if the user selects intermediate difficulty,
 *      then, selection = {1,2}
 * 
 * The possible menu selections, with selection array values are:
 * 
 *  1.Start Game
 *      1. Easy {1,1}
 *      2. Intermediate {1,2}
 *      3. Difficult {1,3}
 *  2. Load/Save Data
 *      1. Load {2,1}
 *      2. Save {2,2}
 *  3. Store {3,0}
 *      //store won't have any sub options
 *  4. Help {4,0}
 *      //help won't have any sub options
 *  5. About {5,0}
 *      //about won't have any sub options
 * 
 * Based on the option the user selected,
 * the slection array elements should be updated.
 * Using proper if statements in the main function,
 * the required function will be called.
 */

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CP;

void gotoXY(int x, int y)
{
    CP.X = x;
    CP.Y = y;
    SetConsoleCursorPosition(console, CP);
}

// Function to show the
// help text for the game
void showHelp(){
    //this function shall be expanded later on;
    cout<<"This is the help text";
}

// Function to show the
// about text for the game
void showHelp(){
    //this function shall be expanded later on;
    cout<<"This is the about text";
}



void showMenu(int selection[])
{
    system("cls");
    /**Code to print a menu with following options:
     * 1. Start Game
     * 2. Load/Save Data
     * 3. Store
     * 4. Help
     * 5. About
     */

    gotoXY(15, 4);
    cout << "Select an option below: ";

    gotoXY(20, 6);
    cout << "1.     Start Game";
    gotoXY(20, 7);
    cout << "2.     Load/Save Game";
    gotoXY(20, 8);
    cout << "3.     Store";
    gotoXY(20, 9);
    cout << "4.     Help";
    gotoXY(20, 10);
    cout << "5.     About";

}

#endif