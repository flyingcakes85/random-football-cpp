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

// Structure to hold variables
// for various power-ups
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

<<<<<<< HEAD
    // Coins, or the virual money 
=======
    // Coins, or the virtual money
>>>>>>> refs/remotes/snehitsah/master
    long int coins;

    // Power-up database
    powerups playerPowerUp;

public:
    //Function to input player's data
    void input();
    // Function to return pointer
    // to the playerName array
    const char *getPlayerName() const;
};
<<<<<<< HEAD
void userData::input()
{
    cout<<"Enter Player's Score(Wins,Loses,Draws):";
    cin>>score[0]>>score[1]>>score[2];
    cout<<"Enter Player's Name:";
    gets(playerName);
    cout<<"Enter No of Coins available:";
    cin>>coins;
    cout<<"Enter Player's Powerups:"<<endl;
    cout<<"Long Shoot Ability=";cin>>playerPowerUp.longShoot;
    cout<<"Lucky Ability=";cin>>playerPowerUp.lucky8;
    cout<<"Skip The Toss Ability=";cin>>playerPowerUp.skipTheToss;
}
=======

// Function to input
// user data
void userData::input()
{
    cout << "Enter Player's Name:";
    scanf(" %[^\n]s\n", playerName);
}

// Function to return pointer
// to the playerName array
>>>>>>> refs/remotes/snehitsah/master
const char *userData::getPlayerName() const
{
    return playerName;
}

// Function to save user
// data on the disk
void saveData(userData &u)
{
    /**Function to save data
     * from the class &u (passed as argument)
     * to a file in binary format
     * Save file location should be:
     * C:\RandomFootball\[playerName].dat
     *
     *Player Name is in the playerName variable
     */

    char playerName[50];
    const char *p;
    p = u.getPlayerName();
    int i = 0;
    for (i = 0; *(p + i) != '\0'; ++i)
    {
        playerName[i] = *(p + i);
    }
    playerName[i] = '\0';
}

// Function to load user
// data from the disk
void loadData(userData &u)
{
    /**Function to load data
     * from the file at :
     * C:\RandomFootball\[name].dat
     * to the class u passed as argument
     *
     * name has also been passed as argument
     */

    char fileName[100];
    strcpy(fileName, "C:\\RandomFootball\\");
    strcat(fileName, u.getPlayerName());
    strcat(fileName, ".dat");
    ifstream loadPlayerData;
    loadPlayerData.open(fileName, ios::binary);
    if (loadPlayerData)
    {
        cout << "Saved game data loaded!";
    }
    else
    {
        cout << "No game data saved by this name!";
    }
}

#endif
