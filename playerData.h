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

// Structure to hold variables
// for vaious power-ups
struct powerups
{
    // Power-up to allow player to
    // attempt a shoot before they
    // reach the goalkeeper
    int longShoot;

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

    // Coins, or the virual money
    long int coins;

    // Power-up database
    powerups playerPowerUp;
};

void saveData(userData &u)
{
    /**Function to save data
     * from the class &u (passed as argument)
     * to a file in binary format
     * Save file location should be:
     * C:\RandomFootball\[playerName].dat 
     */
}

void loadData(userData &u, char name[])
{
    /**Function to load data
     * from the file at :
     * C:\RandomFootball\[name].dat
     * to the class u passed as argument
     */
}

#endif