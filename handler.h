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

#ifndef _HANDLER_
#define _HANDLER_

#include <windows.h>
#include "playerData.h"
#include "functionalities.h"
#include "teams.h"

using namespace std;

/**
 * This header file contains most of the funcitons
 * that are used to build the menus.
 *
 * The possible menu selections are:
 *
 *  1.Start Game
 *      1. Easy
 *      2. Intermediate
 *      3. Difficult
 *  2. Load/Save Data
 *      1. Load
 *      2. Save
 *  3. Store
 *      //store won't have any sub options
 *  4. Help
 *      //help won't have any sub options
 *  5. About
 *      //about won't have any sub options
 *  6. Exit
 *      //for exiting the game
 *
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
    /**
     * Code to print a menu with following options:
     * 1. Start Game
     * 2. Load/Save Data
     * 3. Store
     * 4. Help
     * 5. About
     */

    cout << endl
         << "    ____  ___    _   ______  ____  __  ___   __________  ____  __________  ___    __    __ ";
    cout << endl
         << "   / __ \\/   |  / | / / __ \\/ __ \\/  |/  /  / ____/ __ \\/ __ \\/_  __/ __ )/   |  / /   / / ";
    cout << endl
         << "  / /_/ / /| | /  |/ / / / / / / / /|_/ /  / /_  / / / / / / / / / / __  / /| | / /   / /  ";
    cout << endl
         << " / _, _/ ___ |/ /|  / /_/ / /_/ / /  / /  / __/ / /_/ / /_/ / / / / /_/ / ___ |/ /___/ /___";
    cout << endl
         << "/_/ |_/_/  |_/_/ |_/_____/\\____/_/  /_/  /_/    \\____/\\____/ /_/ /_____/_/  |_/_____/_____/";

    powerups playerPowerUp;
    playerPowerUp = player.returnPowerUp();

    long int playerCoins;
    playerCoins = player.returnCoins();

    bool running = true;
    int x = 6, menuItem = 0;

    bool playing = true;
    int y = 6, difficultyItem = 0;

    bool loadingSaving = true;
    int z = 6, loadSaveItem = 0;

    bool buyPowerups = true;
    int a = 6, powerupItem = 0;

    gotoXY(15, 7);
    cout << "MAIN MENU! Select an option below: ";
    gotoXY(16, 9);
    cout << "->";

    while (running)
    {
        gotoXY(20, 9);
        cout << "1.     Start Game";
        gotoXY(20, 10);
        cout << "2.     Load/Save Game";
        gotoXY(20, 11);
        cout << "3.     Store";
        gotoXY(20, 12);
        cout << "4.     Help";
        gotoXY(20, 13);
        cout << "5.     About";
        gotoXY(20, 14);
        cout << "6.     Exit";
        system("pause>nul");

        if (GetAsyncKeyState(VK_DOWN) && x != 11)
        {
            gotoXY(16, x+3);
            gotoXY(16, x+3);
            cout << "  ";
            x++;
            gotoXY(16, x+3);
            cout << "->";
            menuItem++;
            continue;
        }
        if (GetAsyncKeyState(VK_UP) && x != 6)
        {
            gotoXY(16, x+3);
            gotoXY(16, x+3);
            cout << "  ";
            x--;
            gotoXY(16, x+3);
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
                            player.selectTeam();
                            startGame(5, player);
                            playing = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Intermediate mode!";
                            player.selectTeam();
                            startGame(4, player);
                            playing = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "Difficult mode!";
                            player.selectTeam();
                            startGame(3, player);
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
                    if (GetAsyncKeyState(VK_BACK))
                    {
                        goto mainMenu;
                    }
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
                            gotoXY(15, 5);
                            cout << "Saving game data!";
                            player.saveData();
                            system("pause>nul");
                            goto mainMenu;
                            loadingSaving = false;
                            break;

                        case 1:
                            gotoXY(15, 5);
                            cout << "Loading game data!";
                            player.loadData();
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

                gotoXY(15, 4);
                cout << "Welcome to the store! Select PowerUp to buy: ";
                gotoXY(98, 4);
                cout << "Your coins: " << playerCoins;
                gotoXY(16, 6);
                cout << "->";
                while (buyPowerups)
                {
                    gotoXY(20, 6);
                    cout << "1.   Skip The Toss";
                    gotoXY(39, 6);
                    cout << "(You have: " << playerPowerUp.skipTheToss << ")";
                    gotoXY(75, 6);
                    cout << "Coins Needed Per Five Items: 500";
                    gotoXY(20, 7);
                    cout << "2.   Lucky '8'";
                    gotoXY(39, 7);
                    cout << "(You have: " << playerPowerUp.lucky8 << ")";
                    gotoXY(75, 7);
                    cout << "Coins Needed Per Five Items: 1000";
                    gotoXY(20, 8);
                    cout << "3.   Long Shot";
                    gotoXY(39, 8);
                    cout << "(You have: " << playerPowerUp.longShot << ")";
                    gotoXY(75, 8);
                    cout << "Coins Needed Per Five Items: 1500";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_BACK))
                    {
                        goto mainMenu;
                    }
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
                            gotoXY(40, 8);
                            cout << "CONFIRMATION!";
                            gotoXY(25, 9);
                            cout << "Are you sure you want to buy this power up?";
                            gotoXY(38, 10);
                            cout << "Yes(Y)      No(N)";
                            system("pause>nul");
                            if (GetAsyncKeyState(0x59))
                            {
                                if (playerCoins >= 500)
                                {
                                    playerPowerUp.skipTheToss += 5;
                                    playerCoins -= 500;
                                    player.updateCoins(1);
                                    player.updatePowerUp(1);
                                    gotoXY(24, 12);
                                    cout << "Contacting store server. ";
                                    delay(1000);
                                    cout << "Processing your item. ";
                                    delay(1000);
                                    cout << "Buying ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    gotoXY(20, 15);
                                    cout << "Thank you for visiting the store. 5x PowerUps: Skip The Toss added!";
                                    system("pause>nul");
                                    player.saveData();
                                    goto mainMenu;
                                }
                                else
                                {
                                    gotoXY(20, 15);
                                    cout << "Not enough coins! Collect more to buy this PowerUp!";
                                    system("pause>nul");
                                    goto mainMenu;
                                }
                            }
                            else if (GetAsyncKeyState(0x4E))
                            {
                                goto mainMenu;
                            }
                            system("pause>nul");
                            buyPowerups = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose to be lucky!";
                            gotoXY(40, 8);
                            cout << "CONFIRMATION!";
                            gotoXY(25, 9);
                            cout << "Are you sure you want to buy this power up?";
                            gotoXY(38, 10);
                            cout << "Yes(Y)      No(N)";
                            system("pause>nul");
                            if (GetAsyncKeyState(0x59))
                            {
                                if (playerCoins >= 1000)
                                {
                                    playerPowerUp.lucky8 += 5;
                                    playerCoins -= 1000;
                                    player.updateCoins(2);
                                    player.updatePowerUp(2);
                                    gotoXY(24, 12);
                                    cout << "Contacting store server. ";
                                    delay(1000);
                                    cout << "Processing your item. ";
                                    delay(1000);
                                    cout << "Buying ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    gotoXY(20, 15);
                                    cout << "Thank you for visiting the store. 5x PowerUps: Lucky '8' added!";
                                    system("pause>nul");
                                    player.saveData();
                                    goto mainMenu;
                                }
                                else
                                {
                                    gotoXY(20, 15);
                                    cout << "Not enough coins! Collect more to buy this PowerUp!";
                                    system("pause>nul");
                                    goto mainMenu;
                                }
                            }
                            else if (GetAsyncKeyState(0x4E))
                            {
                                goto mainMenu;
                            }
                            system("pause>nul");
                            buyPowerups = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose to take a long shot!";
                            gotoXY(40, 8);
                            cout << "CONFIRMATION!";
                            gotoXY(25, 9);
                            cout << "Are you sure you want to buy this power up?";
                            gotoXY(38, 10);
                            cout << "Yes(Y)      No(N)";
                            system("pause>nul");
                            if (GetAsyncKeyState(0x59))
                            {
                                if (playerCoins >= 1500)
                                {
                                    playerPowerUp.longShot += 5;
                                    playerCoins -= 1500;
                                    player.updateCoins(3);
                                    player.updatePowerUp(3);
                                    gotoXY(24, 12);
                                    cout << "Contacting store server. ";
                                    delay(1000);
                                    cout << "Processing your item. ";
                                    delay(1000);
                                    cout << "Buying ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    cout << ". ";
                                    delay(500);
                                    gotoXY(20, 15);
                                    cout << "Thank you for visiting the store. 5x PowerUps: LongShot added!";
                                    system("pause>nul");
                                    player.saveData();
                                    goto mainMenu;
                                }
                                else
                                {
                                    gotoXY(20, 15);
                                    cout << "Not enough coins! Collect more to buy this PowerUp!";
                                    system("pause>nul");
                                    goto mainMenu;
                                }
                            }
                            else if (GetAsyncKeyState(0x4E))
                            {
                                goto mainMenu;
                            }
                            system("pause>nul");
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
                system("pause>nul");
                goto mainMenu;
                running = false;
                break;

            case 4:
                system("cls");
                gotoXY(15, 5);
                showAbout();
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