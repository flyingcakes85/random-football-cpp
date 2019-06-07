#ifndef _FUNCTIONALITIES_
#define _FUNCTIONALITIES_

#include <stdlib.h>

//Function to get random
//numbers from 1 to 10
int getRandomNumber()
{
    int theRandomNumber;
    /**Code to generate the random number
     * The random number is saved
     * in variable theRandomNumber.
     * Function returns this number
     **/

    theRandomNumber = rand() % 10;

    return theRandomNumber;
}

#endif