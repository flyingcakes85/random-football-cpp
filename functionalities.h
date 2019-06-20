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

#ifndef _FUNCTIONALITIES_
#define _FUNCTIONALITIES_

#include <stdlib.h>
#include <wincon.h>
#include <string>
#include <ctime>
#include <ctype.h>
#include "playerData.h"

using namespace std;

//Function to get random
//numbers from 1 to 10
int *getUniqueRandomNumbers(int size)
{
    int temp, s = 0;
    static int theRandomNumbers[5];

    /**Code to generate the random number
     * The random numbers are saved
     * in variable theRandomNumbers.
     * Function returns this number
     **/

    // set the seed
    srand((unsigned)time(NULL));

    for (int i = 0; i < size; ++i)
    {
        s = 0;
        temp = (rand() % 10) + 1;

        for (int j = 0; j < i; ++j)
        {
            if (theRandomNumbers[j] == temp)
            {
                --i;
                s = 1;
                break;
            }
        }

        if (s == 0)
        {
            theRandomNumbers[i] = temp;
        }
    }

    return theRandomNumbers;
}

//Generates a random number and returns
int getRandomNumber(int max)
{
    int theRandomNumber;

    // set the seed
    srand((unsigned)time(NULL));

    theRandomNumber = (rand() % max) + 1;
    return theRandomNumber;
}

// Checks whether the user inputed
// numbers match the random number
int checkMatch(int getno[])
{
    // Result = 1, if any of the user inputted number matches the random number
    // Result = 0, if any of the user inputted number does not match the random number
    int result = 0;

    //using the getRandomNumber function
    for (int i = 0; i < 5; i++)
    {
        if (getno[i] == getRandomNumber(10))
        {
            result = 1;
            break;
        }
    }

    return result;
}

int checkMatchFromArray(int choice)
{
    int *p;

    p = getUniqueRandomNumbers(5);

    int r = 1;

    for (int i = 0; i < 4; ++i)
    {

        if (choice == *(p + i))
        {
            r = 0;
            break;
        }
    }
    return r;
}

int charToInt(char c[])
{
    int i = 0;
    for (int i = 0; i < 2; ++i)
    {
        i += ((int)c[i]) * ((10) ^ (1 - i));
    }
    return i;
}

// Function to emulate
// a toss
// 1 = PC wins
// 2 = User wins
int toss()
{
    return getRandomNumber(2);
}

int IsNumeric(char c[])
{

    for (int i = 0; c[i] != '\0'; i++)
    {
        if (isalpha(c[i]) != 0)
        {
            return 1;
        }
    }
    return 0;
}

int startGame(int guesses, userData &player)
{
    cout << endl;

    // Ask for name if
    // player doesn't already have

    int playerGuesses[guesses];

    if (player.HasData() == false)
    {
        char name[50];
        cout << "Please enter your name: ";
        scanf(" %[^\n]s\n", name);
        player.setPlayerName(name);
    }

    cout << "\nPlease enter a game durtaion (b/w 15 and 100): ";
    int duration, choice;
    char cduration[2];
    cin >> cduration;
    for (;;)
    {
        if (IsNumeric(cduration) == 1)
        {
            cout << endl
                 << "Please enter only numbers!" << endl
                 << "Enter a game durtaion (b/w 15 and 100): ";
            cin >> cduration;
        }
        else
        {
            break;
        }
    }
    duration = stoi(cduration);

    bool playerHasBall = false;
    if (toss() == 2)
    {
        playerHasBall = true;
    }

    int playerDistanceFromGoal = 3, pcDistanceFromGoal = 3;

    for (int i = 0; i < duration;)
    {
        if (playerHasBall = true)
        {
            system("cls");
            cout << "You are" << playerDistanceFromGoal << " steps away from goal.";
            cout << "Enter a Number: ";
            cin >> choice;
            ++i;

            if (checkMatchFromArray(choice) == 0)
            {
                --playerDistanceFromGoal;
                ++pcDistanceFromGoal;
            }
            else
            {
                playerHasBall = false;
            }
        }
        else
        {
            cout << "Enter a Number: ";
            cin >> choice;
            ++i;

            if (checkMatchFromArray(choice) == 1)
            {
                ++playerDistanceFromGoal;
                --pcDistanceFromGoal;
            }
            else
            {
                playerHasBall = true;
            }
        }
    }

    return 0;
}
#endif