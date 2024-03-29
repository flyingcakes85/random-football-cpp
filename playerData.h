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

/**
 * This file contains the class and member functions
 * to handle various operations dealing with the user profile
 */

//Function for delay
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

// Structure to hold variables for various power-ups
struct powerups
{
    // Power-up to allow player to
    // attempt a shoot before they
    // reach the goalkeeper
    int longShot;

    // Power-up to allow player to
    // select up to 8 numbers depending
    // on difficulty chosen
    int lucky8;

    // Power-up to allow player to
    // skip the toss at start of
    // match and instead commence
    // the game himself
    int skipTheToss;
};

// The main class, that stores all data and
// contains the member functions
class userData
{
    // Variable to store score
    // index 0 : wins
    // index 1 : loses
    // index 2 : draws
    int score[3];

    // Variable to store total
    // Goals scored and conceded
    // index 0: scored
    // index 1: conceded
    int goalCount[2];

    // Variable to store number of
    // Games played
    int gameCount;

    // Variable to hold player's name
    char playerName[50];

    // Coins, or the virtual money
    long int coins;

    // Power-up database
    powerups playerPowerUp;

    // Player's selected team
    char myTeam[50];

    // Checks if class has data
    bool hasData;

public:
    // Default Constructor
    userData()
    {
        // Initialize all variables

        score[0] = 0;
        score[1] = 0;
        score[2] = 0;

        goalCount[0] = 0;
        goalCount[1] = 0;

        gameCount = 0;

        coins = 5000;

        playerPowerUp.longShot = 0;
        playerPowerUp.lucky8 = 0;
        playerPowerUp.skipTheToss = 0;

        hasData = false;
    }

    //Function to input player's data
    void input();

    // Function to return pointer
    // to the playerName array
    const char *getPlayerName() const;

    // Function to load data
    void loadData();

    // Fuction to save data
    void saveData();

    // Function to update playerName
    void setPlayerName(char name[]);

    // Function to update gameCount
    void updateGameCount();

    // Function to return gameCount
    int getGameCount();

    // Function to update goalCount
    void updateGoalCount(int scored, int conceded);

    // Function to return goalCount
    int *getGoalCount();

    // Function to return PowerUp count
    powerups returnPowerUp();

    // Function to update PowerUp data
    // choice = 1 : Skip The Toss
    // choice = 2 : Lucky8
    // choice = 3 : Long Shot
    // amt defaults to 5
    void updatePowerUp(int choice, int amt = 5);

    // Function to update coins
    // or the virtual money
    void updateCoins(int amt);

    // Function to return coins
    // or the virtual money
    long int returnCoins();

    // Function to select team
    void selectTeam();

    // Function to set team
    void setTeam(char mySelectedTeam[50]);

    // Function to get playerTeam
    const char *getPlayerTeam() const;
    // Return hasData
    bool HasData();

    // Update Score
    void updateScore(int i)
    {
        ++score[i];
    }

    // Function to get score
    int *getScore();
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

// Function to get playerTeam
const char *userData::getPlayerTeam() const
{
    return myTeam;
}

// Function to update playerName
void userData::setPlayerName(char name[])
{
    strcpy(playerName, name);
    hasData = true;
}

// Function to set Player's Team
void userData::setTeam(char mySelectedTeam[50])
{
    strcpy(myTeam, mySelectedTeam);
}

//Function to update goalCount
void userData::updateGoalCount(int scored, int conceded)
{
    goalCount[0] += scored;
    goalCount[1] += conceded;
}

// Function to get goalCount
int *userData::getGoalCount()
{
    return goalCount;
}

// Function to update gameCount
void userData::updateGameCount()
{
    ++gameCount;
}

// Function to get gameCount
int userData::getGameCount()
{
    return gameCount;
}

// Function to get score
int *userData::getScore()
{
    return score;
}

// Function to return PowerUp count
powerups userData::returnPowerUp()
{
    return playerPowerUp;
}

// Function to update PowerUp data
// choice = 1 : Skip The Toss
// choice = 2 : Lucky8
// choice = 3 : Long Shot
// amt defaults to 5
void userData::updatePowerUp(int choice, int amt)
{
    if (choice == 1)
    {
        playerPowerUp.skipTheToss += amt;
    }
    if (choice == 2)
    {
        playerPowerUp.lucky8 += amt;
    }
    if (choice == 3)
    {
        playerPowerUp.longShot += amt;
    }
}

// Function to return coins
// or the virtual money
long int userData::returnCoins()
{
    return coins;
}

// Function to update coins
// or the virtual money
void userData::updateCoins(int amt)
{
    coins += amt;
}

// Function to save user
// data on the disk
void userData::saveData()
{
saveUserData:
    system("cls");
    /**
     * Function to save data
     * from the class &u (passed as argument)
     * to a file in binary format
     * Save file location should be:
     * C:\RandomFootball\[playerName].dat
     *
     *Player Name is in the playerName variable
     */

    char playerNameForSave[50];
    if (hasData == false)
    {
        gotoXY(15, 5);
        cout << "Please enter a name: ";
        scanf(" %[^\n]s\n", playerNameForSave);
        setPlayerName(playerNameForSave);
    }

    // Setting path for file
    strcpy(playerNameForSave, getPlayerName());
    char saveFileName[100];
    strcpy(saveFileName, "C:\\RandomFootball\\");
    strcat(saveFileName, playerNameForSave);
    strcat(saveFileName, ".dat");

    // Opening the file
    ofstream savePlayerData;
    savePlayerData.open(saveFileName, ios::out | ios::binary);
    // Function to write
    savePlayerData.write((char *)&player, sizeof(player));
    gotoXY(20, 7);
    cout << "Game data saved!" << endl;
}

// Return hasData
bool userData::HasData()
{
    return hasData;
}

// Function to load user
// data from the disk
void userData::loadData()
{
    system("cls");
    /**Function to load data
    * from the file at :
    * C:\RandomFootball\[name].dat
    * to the class u passed as argument
    *
    * name has also been passed as argument
    */
loadUserData:
    char playerNameForLoad[50];
    gotoXY(15, 5);
    cout << "Please enter a name: ";
    scanf(" %[^\n]s\n", playerNameForLoad);
    setPlayerName(playerNameForLoad);
    strcpy(playerNameForLoad, getPlayerName());

    // Setting path for file
    char loadFileName[100];
    strcpy(loadFileName, "C:\\RandomFootball\\");
    strcat(loadFileName, playerNameForLoad);
    strcat(loadFileName, ".dat");

    // Opening the file
    ifstream loadPlayerData;
    loadPlayerData.open(loadFileName, ios::in | ios::binary);

    // Checking if file exists
    if (loadPlayerData)
    {
        gotoXY(18, 7);
        cout << "Loading game data ";
        delay(500);
        cout << ". ";
        delay(500);
        cout << ". ";
        delay(500);
        cout << ". ";
        gotoXY(18, 9);
        // Function to read
        loadPlayerData.read((char *)&player, sizeof(player));
        cout << "Saved game data loaded!" << endl;
    }
    else
    {
        gotoXY(18, 7);
        cout << "Loading game data ";
        delay(500);
        cout << ". ";
        delay(500);
        cout << ". ";
        delay(500);
        cout << ". ";
        gotoXY(18, 9);
        cout << "No game data saved by this name! Please retry!";
        delay(2000);
        system("cls");
        goto loadUserData;
    }
}

#endif
