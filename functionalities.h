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
#include <conio.h>

using namespace std;

bool playerHasBall;
int playerDistanceFromGoal = 3;

//Variable to store scores while the game is on
//score[0] = Player's score
//score[1] = PC's score
int score[2];

//Function to get random
//numbers from 1 to 10
int *getUniqueRandomNumbers(int size)
{
    int temp, s = 0;
    static int theRandomNumbers[5];

    /**
     * Code to generate the random number
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

char catchKeypress()
{
    int keypress = _getch();
    char cKeypress = keypress;
    return cKeypress;
}

//Generates a random number and returns
int getRandomNumber(int maximum)
{
    int theRandomNumber;

    // set the seed
    srand((unsigned)time(NULL));

    theRandomNumber = (rand() % maximum) + 1;
    return theRandomNumber;
}

// Receives an array of random numbers and
// matches the inputted number against the array
//
// return 0 : match successful
// return 1 : match unsuccessful
int checkMatchFromArray(int choice, int amt)
{
    //only for debugging
    if (choice == 9)
    {
        return 0;
    }
    else if (choice == 8)
    {
        return 1;
    }

    int *p;

    p = getUniqueRandomNumbers(amt);

    int r = 1;

    for (int i = 0; i < amt; ++i)
    {

        if (choice == *(p + i))
        {
            r = 0;
            break;
        }
    }
    return r;
}

// Function to emulate a toss
//
// 0 = PC wins
// 1 = User wins
int toss(int i)
{
    if (i == 99) // Fair Toss
    {
        return getRandomNumber(2) - 1;
    }
    else if (i == 98) // Unfair Toss while using powerup
    {
        delay(800);
        return 1;
    }
    else
    {
        return 0;
    }
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

void usePowerup(userData &player, int guesses)
{
PowerUp:
    system("cls");
    gotoXY(15, 5);
    cout << "Choose a PowerUp: ";
    powerups p = player.returnPowerUp();

    gotoXY(17, 6);
    cout << "1.    Long Shot (You have: " << p.longShot << ")";
    gotoXY(17, 7);
    cout << "2.    Lucky '8' (You have: " << p.lucky8 << ")";
    gotoXY(17, 9);
    cout << "Enter your choice [1 or 2]: ";

    int c, choice;
    cin >> c;
    while (true)
    {
        if (c == 1)
        {
            if (playerHasBall == false)
            {
                gotoXY(15, 14);
                cout << "Can't use Long Shot when you don't have the ball";
            }
            else if (p.longShot > 0)
            {
                player.updatePowerUp(3, -1);
                gotoXY(15, 12);
                cout << "It's time to shoot a goal!";
                gotoXY(15, 13);
                cout << "Enter a number between 1 and 10!: ";
                cin >> choice;
                for (;;)
                {
                    if (choice >= 1 && choice <= 10)
                    {
                        break;
                    }
                    else
                    {
                        gotoXY(15, 15);
                        cout << "Please enter a number only between 1 and 10!: ";
                        cin >> choice;
                    }
                }
                playerHasBall = false;

                if (checkMatchFromArray(choice, guesses) == 0)
                {
                    gotoXY(15, 18);
                    cout << "That's a goal!";
                    ++score[0];
                    playerDistanceFromGoal = 3;
                }
                else
                {
                    gotoXY(15, 18);
                    cout << "Goal saved by PC!";
                }
            }
            else
            {
                gotoXY(15, 12);
                cout << "You don't have enough PowerUp: Long Shots!";
                gotoXY(15, 13);
                cout << "You currently have " << player.returnCoins() << " coins left. Would you like to purchase a pack of 5 for 1500 coins? [Yes(Y)/No(N)]?";
                char k = catchKeypress();
                if (k == 'Y' || k == 'y')
                {
                    if (player.returnCoins() >= 1500)
                    {
                        player.updateCoins(-1500);
                        player.updatePowerUp(3, 5);
                        player.updatePowerUp(3, -1);
                        gotoXY(15, 15);
                        cout << "It's time to shoot a goal!";
                        gotoXY(15, 16);
                        cout << "Enter a number between 1 and 10!: ";
                        cin >> choice;
                        for (;;)
                        {
                            if (choice >= 1 && choice <= 10)
                            {
                                break;
                            }
                            else
                            {
                                gotoXY(15, 18);
                                cout << "Please enter a number only between 1 and 10!: ";
                                cin >> choice;
                            }
                        }
                        playerHasBall = false;

                        if (checkMatchFromArray(choice, guesses) == 0)
                        {
                            gotoXY(15, 21);
                            cout << "Thats a goal!";
                            delay(400);
                            ++score[0];
                            playerDistanceFromGoal = 3;
                        }
                        else
                        {
                            gotoXY(15, 21);
                            cout << "Goal saved by PC!";
                        }
                    }
                }
            }
            break;
        }
        else if (c == 2)
        {
            if (p.lucky8 > 0)
            {
                player.updatePowerUp(2, -1);
                gotoXY(15, 15);
                cout << "You use Lucky 8!";
                gotoXY(15, 16);
                cout << "Enter a number between 1 and 10!: ";
                cin >> choice;
                for (;;)
                {
                    if (choice >= 1 && choice <= 10)
                    {
                        break;
                    }
                    else
                    {
                        gotoXY(15, 13);
                        cout << "Please enter a number only between 1 and 10!: ";
                        cin >> choice;
                    }
                }
                if (playerHasBall == true)
                {
                    if (checkMatchFromArray(choice, 8) == 0)
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
                    if (checkMatchFromArray(choice, 8))
                    {
                        playerHasBall = true;
                    }
                    else
                    {
                        ++playerDistanceFromGoal;
                    }
                }
            }
            else
            {
                gotoXY(15, 11);
                cout << "You don't have enough PowerUp: Lucky '8'!";
                gotoXY(15, 12);
                cout << "You currently have " << player.returnCoins() << " coins left. Would you like to purchase a pack of 5 for 1000 coins? [Yes(Y)/No(N)]?";
                char k = catchKeypress();
                if (k == 'Y' || k == 'y')
                {
                    if (player.returnCoins() >= 1000)
                    {
                        player.updateCoins(-1000);
                        player.updatePowerUp(2, 5);
                        player.updatePowerUp(2, -1);
                        gotoXY(15, 15);
                        cout << "You use Lucky 8!";
                        gotoXY(15, 16);
                        cout << "Enter a number between 1 and 10!: ";
                        cin >> choice;
                        for (;;)
                        {
                            if (choice >= 1 && choice <= 10)
                            {
                                break;
                            }
                            else
                            {
                                gotoXY(15, 18);
                                cout << "Please enter a number only between 1 and 10!: ";
                                cin >> choice;
                            }
                        }
                        if (playerHasBall == true)
                        {
                            if (checkMatchFromArray(choice, 8) == 0)
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
                            if (checkMatchFromArray(choice, 8))
                            {
                                playerHasBall = true;
                            }
                            else
                            {
                                ++playerDistanceFromGoal;
                            }
                        }
                    }
                }
            }
            break;
        }
        else
        {
            gotoXY(17, 11);
            cout << "Wrong choice! Please enter only 1 or 2 ";
            delay(2500);
            goto PowerUp;
        }
    }
}

int chooseToSkipTheToss(userData &player)
{
    powerups p = player.returnPowerUp();
    if (p.skipTheToss > 0)
    {
        player.updatePowerUp(1, -1);
        gotoXY(15, 8);
        cout << "Using PowerUp: Skip The Toss." << endl;
        return 98;
    }
    else
    {
        gotoXY(15, 8);
        cout << "You don't have any Skip The Toss available.";
        gotoXY(15, 9);
        cout << "You currently have " << player.returnCoins() << " coins left.";
        gotoXY(15, 10);
        cout << "Would you like to purchase a pack of 5 for 500 coins? [Yes(Y)/No(N)]?";
        char keyPressed;
    keyPressForYN:
        keyPressed = catchKeypress();
        if (keyPressed == 'Y' || keyPressed == 'y')
        {
            if (player.returnCoins() >= 500)
            {

                player.updatePowerUp(1, -1);
                player.updateCoins(-500);
                gotoXY(15, 12);
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
                delay(1500);
                gotoXY(15, 17);
                cout << "Using PowerUp: Skip The Toss!" << endl;
                delay(1500);
                return 98;
            }
            else
            {
                gotoXY(15, 12);
                cout << "Not enough coins! Doing a fair toss!";
                delay(1500);
                return 99;
            }
        }
        else if (keyPressed == 'n' || keyPressed == 'N')
        {
            gotoXY(15, 12);
            cout << "Doing a fair toss." << endl;
            delay(1000);
            return 99;
        }
        else
        {
            gotoXY(15, 12);
            cout << "Please enter Y/N only: " << endl;
            goto keyPressForYN;
        }
    }
}

// Function handling all functionalities of the game
int startGame(int guesses, userData &player)
{
    system("cls");
    cout << endl;

    // Ask for name if
    // player doesn't already have
    if (player.HasData() == false)
    {
        char name[50];
        gotoXY(15, 5);
        cout << "Please enter a name: ";
        scanf(" %[^\n]s\n", name);
        player.setPlayerName(name);
        gotoXY(15, 7);
        cout << "Name set!";
        delay(1500);
    }

    system("cls");

    //Setting the duration
    gotoXY(15, 5);
    cout << "Please enter a game duration (Between 15 and 100): ";
    gotoXY(15, 7);
    cout << "Duration is the number of times you are allowed to make choice of numbers.";
    gotoXY(15, 8);
    cout << "After the selected duration is up, the game is over.";

    int duration, choice;
    char cduration[2];
    gotoXY(66, 5);
    cin >> cduration;
    for (;;)
    {
        if (IsNumeric(cduration) == 1)
        {
            if (stoi(cduration) >= 15 && stoi(cduration) <= 100)
            {
                gotoXY(15, 10);
                cout << "Please enter a number between 15 and 100: ";
            }
            else
            {
                gotoXY(15, 12);
                cout << "Please enter only numbers!"
                     << "Enter a game duration (between 15 and 100): ";
                cin >> cduration;
            }
        }
        else
        {
            break;
        }
    }
    duration = stoi(cduration);
    gotoXY(15, 10);
    cout << "Duration set to " << duration << " chances!";
    delay(1500);

    system("cls");

    //Toss to decide initial ball possession
    gotoXY(15, 5);
    cout << "Doing toss for ball possession.";
    gotoXY(15, 7);
    cout << "Would you like to use PowerUp: SkipTheToss [Yes(Y) / No(N)]?";
    char t = catchKeypress();
    int tossNo;
    if (t == 'y' || t == 'Y')
    {
        tossNo = chooseToSkipTheToss(player);
    }

    //delay(600);
    if (toss(tossNo) == 1)
    {
        gotoXY(15, 18);
        cout << "You have won the toss! You have the ball!";
        playerHasBall = true;
    }
    else
    {
        gotoXY(15, 18);
        cout << "PC won the toss! PC has the ball!";
        playerHasBall = false;
    }
    gotoXY(15, 20);
    cout << "Please wait . . .";
    delay(1500);

    system("cls");

    //Starting the actual game

    score[0] = 0;
    score[1] = 0;
    bool increment;
    gotoXY(15, 5);
    cout << "Game will start in ";
    for (int time = 3; time >= 0; --time)
    {
        gotoXY(34, 5);
        cout << time << " seconds";
        delay(1000);
    }

    char keyPressed;

    for (int i = 0; i < duration;)
    {
        system("cls");

        increment = false;

        // Print the score
        gotoXY(78, 2);
        cout << "PC " << score[1] << " : " << score[0] << " You" << endl;

        cout << endl;
        if (playerHasBall == true)
        {
            gotoXY(59, 4);
            cout << "You have the ball! ";
        }
        else
        {
            gotoXY(61, 4);
            cout << "PC has the ball! ";
        }

        if (playerHasBall == true)
        {

            if (playerDistanceFromGoal == 0)
            {
                gotoXY(15, 9);
                cout << "It's time to shoot a goal!";
                gotoXY(15, 10);
                cout << "Enter a number between 1 and 10! Enter 11 to use a PowerUp: ";
                cin >> choice;
                ++i;
                increment = true;
                for (;;)
                {
                    if (choice == 11)
                    {
                        usePowerup(player, guesses);
                        goto endOfLoop;
                    }
                    else if (choice >= 1 && choice <= 10)
                    {
                        break;
                    }
                    else
                    {
                        gotoXY(15, 12);
                        cout << "Please enter a number only between 1 and 10! Enter 11 to use a PowerUp: ";
                        cin >> choice;
                    }
                }
                playerHasBall = false;

                if (checkMatchFromArray(choice, guesses) == 0)
                {
                    gotoXY(15, 15);
                    cout << "Thats a goal!";
                    delay(400);
                    ++score[0];
                    playerDistanceFromGoal = 3;
                    goto endOfLoop;
                }
                else
                {
                    gotoXY(15, 15);
                    cout << "Goal saved by PC!";
                    goto endOfLoop;
                }
            }
            cout << "You are " << playerDistanceFromGoal << " steps away from goal.";
            gotoXY(15, 12);
            cout << "Enter a number between 1 and 10! Enter 11 to use a PowerUp: ";

            ++i;
            increment = true;

            cin >> choice;
            for (;;)
            {
                if (choice == 11)
                {
                    usePowerup(player, guesses);
                    goto endOfLoop;
                }
                else if (choice >= 1 && choice <= 10)
                {
                    break;
                }
                else
                {
                    gotoXY(15, 12);
                    cout << "Please enter a number only between 1 and 10! Enter 11 to use a PowerUp: ";
                    cin >> choice;
                }
            }
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
            if (playerDistanceFromGoal == 6)
            {
                gotoXY(15, 12);
                cout << "PC will now shoot a goal!";
                gotoXY(15, 13);
                cout << "Enter a number between 1 and 10! Enter 11 to use a PowerUp: ";
                ++i;
                increment = true;
                cin >> choice;
                for (;;)
                {
                    if (choice == 11)
                    {
                        usePowerup(player, guesses);
                        goto endOfLoop;
                    }
                    else if (choice >= 1 && choice <= 10)
                    {
                        break;
                    }
                    else
                    {
                        gotoXY(15, 12);
                        cout << "Please enter a number only between 1 and 10! Enter 11 to use a PowerUp: ";
                        cin >> choice;
                    }
                }
                playerHasBall = true;

                if (checkMatchFromArray(choice, guesses) == 0)
                {
                    gotoXY(15, 15);
                    cout << "You saved the goal!";
                    goto endOfLoop;
                }
                else
                {
                    gotoXY(15, 15);
                    cout << "PC scored a goal!";
                    ++score[1];
                    playerDistanceFromGoal = 3;
                    goto endOfLoop;
                }
            }

            cout << "PC is " << (6 - playerDistanceFromGoal) << " steps away from goal.";
            gotoXY(15, 12);
            cout << "Enter a number between 1 and 10! Enter 11 to use a PowerUp: ";

            ++i;
            increment = true;

            cin >> choice;
            for (;;)
            {
                if (choice == 11)
                {
                    usePowerup(player, guesses);
                    goto endOfLoop;
                }
                else if (choice >= 1 && choice <= 10)
                {
                    break;
                }
                else
                {
                    gotoXY(15, 12);
                    cout << "Please enter a number between 1 and 10! Enter 11 to use a PowerUp: ";
                    cin >> choice;
                }
            }
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
        delay(1000);
    }
    delay(2000);
    system("cls");
    gotoXY(15, 5);
    cout << "Game ends!";
    gotoXY(15, 7);
    cout << "Final score: ";
    gotoXY(15, 10);
    cout << "PC " << score[1] << " : " << score[0] << " You";

    // Update stats
    player.updateGameCount();
    player.updateGoalCount(score[0], score[1]);

    // Update Score
    if (score[0] > score[1])
    {
        // Player Wins
        player.updateScore(0);
        gotoXY(15, 15);
        cout << "You Win!";
        gotoXY(15, 16);
        cout << "You have earned 2000 coins!";
        gotoXY(15, 20);
        cout << "THANK YOU FOR PLAYING RandomFootball";
        player.updateCoins(2000);
        system("pause>nul");
    }
    else if (score[1] > score[0])
    {
        // Player Wins
        player.updateScore(1);
        int giftCoins = duration * 8;
        gotoXY(15, 15);
        cout << "You Lost!";
        gotoXY(15, 16);
        cout << "You receive " << giftCoins << " coins as a gift for playing!";
        gotoXY(15, 20);
        cout << "THANK YOU FOR PLAYING RandomFootball";
        player.updateCoins(giftCoins);
        system("pause>nul");
    }
    else
    {
        // Draw
        player.updateScore(2);
        player.updateCoins(1000);
        gotoXY(15, 15);
        cout << "That's a Tie!";
        gotoXY(15, 16);
        cout << "You have earned 1000 coins!";
        gotoXY(15, 20);
        cout << "THANK YOU FOR PLAYING RandomFootball";
        player.updateCoins(1000);
        system("pause>nul");
    }

    player.saveData();
    return 0;
}
#endif
