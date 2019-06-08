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
#include <ctime>
#include "functionalities.h"

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
        temp = rand() % 10;

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
int getRandomNumber(){
    int theRandomNumber;


    return theRandomNumber; 
}


// Checks whether the user inputed
// numbers match the random number
int checkMatch()
{
    // Result = 1, if any of the user inputted number matches the random number
    // Result = 0, if any of the user inputted number does not match the random number
    int result;

    //using the getRandomNumber function

    return result;
}

#endif