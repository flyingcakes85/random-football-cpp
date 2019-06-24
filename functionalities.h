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

// Receives an array of random numbers and
// matches the inputted number against the array
//
// return 0 : match successful
// return 1 : match unsuccessful
int checkMatchFromArray(int choice, int amt)
{
    //only for debugging
    if (choice == 99)
    {
        return 0;
    }
    else if (choice == 98)
    {
        return 1;
    }

    int *p;

    p = getUniqueRandomNumbers(amt);

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

/* int charToInt(char c[])
{
    int i = 0;
    for (int i = 0; i < 2; ++i)
    {
        i += ((int)c[i]) * ((10) ^ (1 - i));
    }
    return i;
} */

// Function to emulate a toss
//
// 1 = PC wins
// 2 = User wins
int toss()
{
    return getRandomNumber(2);
}

// Checks if a given input is entirely numeric
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

// Function handling all functionalities of the game
int startGame(int guesses, userData &player)
{
    //Variable to store scores while the game is on
    //score[0] = Player's score
    //score[1] = PC's score
    int score[2];

    cout << endl;

    // Ask for name if
    // player doesn't already have
    if (player.HasData() == false)
    {
        char name[50];
        gotoXY(20, 9);
        cout << "Enter player's name: ";
        scanf(" %[^\n]s\n", name);
        player.setPlayerName(name);
        cout << endl
             << "Name set!";
        delay(1300);
    }

    system("cls");

    //Setting the duration
    cout << endl
         << "Please enter a game durtaion (b/w 15 and 100): " << endl
         << "Duration is the number of times you are allowed to make choice of numbers." << endl
         << "After the selected duration is up, the game is over." << endl;
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
    cout << endl
         << "Duration set to " << duration << " chances.";
    delay(1300);

    system("cls");

    //Toss to decide initial ball possession
    bool playerHasBall;
    cout << "Doing toss for ball possession.";
    delay(600);
    if (toss() == 2)
    {
        cout << endl
             << "You won the toss!" << endl
             << "You have the ball";
        playerHasBall = true;
    }
    else
    {
        cout << endl
             << "PC won the toss!" << endl
             << "PC has the ball";
        playerHasBall = false;
    }
    cout << endl
         << "Please wait...";
    delay(1500);

    system("cls");

    //Starting the actual game
    int playerDistanceFromGoal = 3;
    score[0] = 0;
    score[1] = 0;
    bool increment;
    cout << "Game will start in 3 seconds";
    delay(3000);
    for (int i = 0; i < duration;)
    {
        system("cls");

        increment = false;

        // Print the score
        cout << "Current score" << endl
             << "PC : " << score[1] << endl
             << "You : " << score[0] << endl;

        if (playerHasBall == true)
        {
            cout << "\nYou have the ball\n";
        }
        else
        {
            cout << "\nPC has the ball";
        }

        if (playerHasBall == true)
        {

            if (playerDistanceFromGoal == 0)
            {
                cout << "It's time to shoot a goal!" << endl;
                cout << "Enter a number: ";
                cin >> choice;
                playerHasBall = false;

                if (checkMatchFromArray(choice, guesses) == 0)
                {
                    cout << "Thats a goal!";
                    ++score[0];
                    goto endOfLoop;
                }
                else
                {
                    cout << "Goal saved by PC";
                    goto endOfLoop;
                }
            }
            cout << "You are " << playerDistanceFromGoal << " steps away from goal.\n\n";
            cout << "Enter a Number: ";
            cin >> choice;
            ++i;
            increment = true;

            if (checkMatchFromArray(choice, guesses) == 0)
            {
                --playerDistanceFromGoal;
            }
            else
            {
                playerHasBall = false;
            }
        }
        else
        {
            system("cls");

            if (playerDistanceFromGoal == 6)
            {
                cout << "PC will now shoot a goal!" << endl;
                cout << "Enter a number: ";
                cin >> choice;
                playerHasBall = true;

                if (checkMatchFromArray(choice, guesses) == 0)
                {
                    cout << "You saved the goal!";
                    ++score[1];
                    goto endOfLoop;
                }
                else
                {
                    cout << "PC scored a goal!";
                    goto endOfLoop;
                }
            }

            cout << "PC is " << (6 - playerDistanceFromGoal) << " steps away from goal.\n\n";
            cout << "Enter a Number: ";
            cin >> choice;
            ++i;

            if (checkMatchFromArray(choice, guesses) == 1)
            {
                ++playerDistanceFromGoal;
            }
            else
            {
                playerHasBall = true;
            }
        }

    endOfLoop:
        if (increment == false)
        {
            ++i;
        }
        cout << "\n\n\n\nEnd of loop " << i;
        delay(1000);
    }
    return 0;
}
#endif