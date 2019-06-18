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
#include "playerData.h"

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

// Function to show the
// help text for the game
void showHelp()
{
    //this function shall be expanded later on;
    cout << "This is the help text";
}

// Function to show the
// about text for the game
void showAbout()
{
    //this function shall be expanded later on;
    cout << "This is the about text";
}

//Function to show main menu
void showMenu()
{
    mainMenu:

    system("cls");
    /**Code to print a menu with following options:
     * 1. Start Game
     * 2. Load/Save Data
     * 3. Store
     * 4. Help
     * 5. About
     */

    userData u;

    bool running = true;
    int x = 6, menuItem = 0;

    bool playing = true;
    int y = 6, difficultyItem = 0;

    bool loadingSaving = true;
    int z = 6, loadSaveItem = 0;

    bool buyPowerups = true;
    int a = 6, powerupItem = 0;

    gotoXY(15, 4);
    cout << "MAIN MENU! Select an option below: ";
    gotoXY(16, 6);
    cout << "->";

    while (running)
    {
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
        gotoXY(20, 11);
        cout << "6.     Exit";
        system("pause>nul");

        if (GetAsyncKeyState(VK_DOWN) && x != 11)
        {
            gotoXY(16, x);
            gotoXY(16, x);
            cout << "  ";
            x++;
            gotoXY(16, x);
            cout << "->";
            menuItem++;
            continue;
        }
        if (GetAsyncKeyState(VK_UP) && x != 6)
        {
            gotoXY(16, x);
            gotoXY(16, x);
            cout << "  ";
            x--;
            gotoXY(16, x);
            cout << "->";
            menuItem--;
            continue;
        }
        if (GetAsyncKeyState(VK_RETURN))
        {
            switch (menuItem)
            {
            case 0:
                system("cls");

                gotoXY(15, 5);
                cout << "Starting new game! Choose a difficulty to continue: ";
                gotoXY(16, 6);
                cout << "->";
                while (playing)
                {
                    gotoXY(20, 6);
                    cout << "1.   Easy";
                    gotoXY(20, 7);
                    cout << "2.   Intermediate";
                    gotoXY(20, 8);
                    cout << "3.   Hard";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && y != 8)
                    {
                        gotoXY(16, y);
                        gotoXY(16, y);
                        cout << "  ";
                        y++;
                        gotoXY(16, y);
                        cout << "->";
                        difficultyItem++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && y != 6)
                    {
                        gotoXY(16, y);
                        gotoXY(16, y);
                        cout << "  ";
                        y--;
                        gotoXY(16, y);
                        cout << "->";
                        difficultyItem--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (difficultyItem)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Easy mode!";
                            playing = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Intermediate mode!";
                            playing = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Hard mode!";
                            playing = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                running = false;
                break;

            case 1:
                system("cls");

                gotoXY(15, 5);
                cout << "Choose to Load/Save your Game Data: ";
                gotoXY(16, 6);
                cout << "->";
                while (loadingSaving)
                {
                    gotoXY(20, 6);
                    cout << "1.   Save game data";
                    gotoXY(20, 7);
                    cout << "2.   Load game data";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && z != 7)
                    {
                        gotoXY(16, z);
                        gotoXY(16, z);
                        cout << "  ";
                        z++;
                        gotoXY(16, z);
                        cout << "->";
                        loadSaveItem++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && z != 6)
                    {
                        gotoXY(16, z);
                        gotoXY(16, z);
                        cout << "  ";
                        z--;
                        gotoXY(16, z);
                        cout << "->";
                        loadSaveItem--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (loadSaveItem)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Saving game data!";
                            u.saveData();
                            gotoXY(15, 10);
                            cout <<"Press any key to return to main menu";
                            system("pause>nul");
                            goto mainMenu;
                            loadingSaving = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Loading game data!";
                            u.loadData();
                            gotoXY(15, 10);
                            cout <<"Press any key to return to main menu";
                            system("pause>nul");
                            goto mainMenu;
                            loadingSaving = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                running = false;
                break;

            case 2:
                system("cls");

                gotoXY(15, 5);
                cout << "Welcome to the store! Select PowerUp to buy: ";
                gotoXY(16, 6);
                cout << "->";
                while (buyPowerups)
                {
                    gotoXY(20, 6);
                    cout << "1.   Skip The Toss";
                    gotoXY(20, 7);
                    cout << "2.   Lucky '8'";
                    gotoXY(20, 8);
                    cout << "3.   Long Shot";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && a != 8)
                    {
                        gotoXY(16, a);
                        gotoXY(16, a);
                        cout << "  ";
                        a++;
                        gotoXY(16, a);
                        cout << "->";
                        powerupItem++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && a != 6)
                    {
                        gotoXY(16, a);
                        gotoXY(16, a);
                        cout << "  ";
                        a--;
                        gotoXY(16, a);
                        cout << "->";
                        powerupItem--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (powerupItem)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose to skip the toss!";
                            gotoXY(15, 10);
                            cout <<"Press any key to return to main menu";
                            system("pause>nul");
                            goto mainMenu;
                            buyPowerups = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose to be lucky!";
                            gotoXY(15, 10);
                            cout <<"Press any key to return to main menu";
                            system("pause>nul");
                            goto mainMenu;
                            buyPowerups = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose to take a long shot!";
                            gotoXY(15, 10);
                            cout <<"Press any key to return to main menu";
                            system("pause>nul");
                            goto mainMenu;
                            buyPowerups = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                running = false;
                break;

            case 3:
                system("cls");
                gotoXY(15, 5);
                showHelp();
                gotoXY(15, 10);
                cout <<"Press any key to return to main menu";
                system("pause>nul");
                goto mainMenu;
                running = false;
                break;

            case 4:
                system("cls");
                gotoXY(15, 5);
                showAbout();
                gotoXY(15, 10);
                cout <<"Press any key to return to main menu";
                system("pause>nul");
                goto mainMenu;
                running = false;
                break;

            case 5:
                system("cls");
                gotoXY(15, 5);
                cout << "Exiting the game. Please wait ";
                delay(1000);
                cout << ". ";
                delay(1000);
                cout << ". ";
                delay(1000);
                cout << ". " << endl;
                delay(500);
                exit(0);
            }
        }
    }
}

#endif
