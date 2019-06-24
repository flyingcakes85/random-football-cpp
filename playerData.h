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

#ifndef _PLAYERDATA_
#define _PLAYERDATA_

#include <iostream>
#include <string.h>

using namespace std;

//Function for time delay
//Accepts argumant in milliseconds
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
    {
    }
}

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CP;

void gotoXY(int x, int y)
{
    CP.X = x;
    CP.Y = y;
    SetConsoleCursorPosition(console, CP);
}

// Structure to hold variables
// for various power-ups
struct powerups
{
    // Power-up to allow player to
    // attempt a shoot before they
    // reach the goalkeeper
    int longShot;

    // Power-up to allow player to
    // select upto 8 numbers depending
    //on difficulty chosen
    int lucky8;

    // Power-up to allow player to
    // skip the toss at start of
    // match and instead commence
    // the game himself
    int skipTheToss;
};

class userData
{
    // Variable to store score
    // index 0 : wins
    // index 1 : loses
    // index 2 : draws
    int score[3];

    // Variable to hold player's name
    char playerName[50];

    // Coins, or the virtual money
    long int coins;

    // Power-up database
    powerups playerPowerUp;

    // Checks if class
    // has data
    bool hasData;

public:
    // Default Constructor
    userData()
    {
        score[0] = 0;
        score[1] = 0;
        score[2] = 0;

        coins = 0;

        playerPowerUp.longShot = 0;
        playerPowerUp.lucky8 = 0;
        playerPowerUp.skipTheToss = 0;

        hasData = false;
    }
    //Function to input player's data
    void input();

    //Function to update coins
    void updateCoins(int c);

    // Function to return pointer
    // to the playerName array
    const char *getPlayerName() const;

    // Function to load data
    void loadData();

    // Fuction to save data
    void saveData();

    // Function to update playerName
    void setPlayerName(char name[]);

    // Return hasData
    bool HasData();
} player;
// Function to input
// user data
void userData::input()
{
    gotoXY(15, 5);
    cout << "Enter Player's Name: ";
    scanf(" %[^\n]s\n", playerName);
}

// Function to return pointer
// to the playerName array
const char *userData::getPlayerName() const
{
    return playerName;
}

void userData::updateCoins(int c)
{
    this->coins += c;
}

// Return hasData
bool userData::HasData()
{
    return hasData;
}

// Function to update playerName
void userData::setPlayerName(char name[])
{
    strcpy(playerName, name);
    hasData = true;
}

#endif
