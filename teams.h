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

#ifndef _TEAMS_
#define _TEAMS_

#include "playerData.h"

// Function to select team
// And set Team name
// setTeam Name done using
// another member function
void userData::selectTeam()
{
    // Temporary variable to store
    // team name.
    char mySelectedTeam[50];

    bool selectingTeam = true;
    int t = 8, selectedTeam = 0;

    gotoXY(17, 6);
    cout << "Please select a Team: ";
    gotoXY(17, 8);
    cout << "->";

    while (selectingTeam)
    {
        gotoXY(20, 8);
        cout << "1.      Argentina";
        gotoXY(20, 9);
        cout << "2.      Australia";
        gotoXY(20, 10);
        cout << "3.      Belgium";
        gotoXY(20, 11);
        cout << "4.      Brazil";
        gotoXY(20, 12);
        cout << "5.      Colombia";
        gotoXY(20, 13);
        cout << "6.      Costa Rica";
        gotoXY(20, 14);
        cout << "7.      Croatia";
        gotoXY(20, 15);
        cout << "8.      Czechia";
        gotoXY(20, 16);
        cout << "9.      England";
        gotoXY(20, 17);
        cout << "10.     France";
        gotoXY(20, 18);
        cout << "11.     Germany";
        gotoXY(20, 19);
        cout << "12.     Ghana";
        gotoXY(20, 20);
        cout << "13.     Hungary";
        gotoXY(20, 21);
        cout << "14.     Iran";
        gotoXY(20, 22);
        cout << "15.     Israel";
        gotoXY(20, 23);
        cout << "16.     Italy";
        gotoXY(20, 24);
        cout << "17.     Kosovo";
        gotoXY(20, 25);
        cout << "18.     Mexico";
        gotoXY(20, 26);
        cout << "19.     Montenegro";
        gotoXY(20, 27);
        cout << "20.     Netherlands";
        gotoXY(20, 28);
        cout << "21.     Nigeria";
        gotoXY(20, 29);
        cout << "22.     Northern Ireland";
        gotoXY(20, 30);
        cout << "23.     Paraguay";
        gotoXY(20, 31);
        cout << "24.     Peru";
        gotoXY(20, 32);
        cout << "25.     Portugal";
        gotoXY(20, 33);
        cout << "26.     Romania";
        gotoXY(20, 34);
        cout << "27.     Scotland";
        gotoXY(20, 35);
        cout << "28.     South Korea";
        gotoXY(20, 36);
        cout << "29.     Spain";
        gotoXY(20, 37);
        cout << "30.     Sweden";
        gotoXY(20, 38);
        cout << "31.     Uruguay";
        gotoXY(20, 39);
        cout << "32.     Wales";
        system("pause>nul");
        if (GetAsyncKeyState(VK_DOWN) && t != 39)
        {
            gotoXY(17, t);
            gotoXY(17, t);
            cout << "  ";
            t++;
            gotoXY(17, t);
            cout << "->";
            selectedTeam++;
            continue;
        }
        if (GetAsyncKeyState(VK_UP) && t != 8)
        {
            gotoXY(17, t);
            gotoXY(17, t);
            cout << "  ";
            t--;
            gotoXY(17, t);
            cout << "->";
            selectedTeam--;
            continue;
        }
        if (GetAsyncKeyState(VK_RETURN))
        {
            switch (selectedTeam)
            {
            case 0:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Argentina!";
                strcpy(mySelectedTeam, "Argentina");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;
            case 1:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Australia!";
                strcpy(mySelectedTeam, "Australia");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 2:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Belgium!";
                strcpy(mySelectedTeam, "Belgium");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 3:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Brazil!";
                strcpy(mySelectedTeam, "Brazil");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 4:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Colombia!";
                strcpy(mySelectedTeam, "Colombia");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 5:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Costa Rica!";
                strcpy(mySelectedTeam, "Costa Rica");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 6:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Croatia!";
                strcpy(mySelectedTeam, "Croatia");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 7:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Czechia!";
                strcpy(mySelectedTeam, "Czechia");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 8:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose England!";
                strcpy(mySelectedTeam, "England");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 9:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose France!";
                strcpy(mySelectedTeam, "France");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 10:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Germany!";
                strcpy(mySelectedTeam, "Germany");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 11:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Ghana!";
                strcpy(mySelectedTeam, "Ghana");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 12:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Hungary!";
                strcpy(mySelectedTeam, "Hungary");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 13:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Iran!";
                strcpy(mySelectedTeam, "Iran");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 14:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Israel!";
                strcpy(mySelectedTeam, "Israel");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 15:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Italy!";
                strcpy(mySelectedTeam, "Italy");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 16:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Kosovo!";
                strcpy(mySelectedTeam, "Kosovo");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 17:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Mexico!";
                strcpy(mySelectedTeam, "Mexico");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 18:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Montenegro!";
                strcpy(mySelectedTeam, "Montenegro");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 19:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Netherlands!";
                strcpy(mySelectedTeam, "Netherlands");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 20:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Nigeria!";
                strcpy(mySelectedTeam, "Nigeria");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 21:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Northern Ireland!";
                strcpy(mySelectedTeam, "Northern Ireland");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 22:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Paraguay!";
                strcpy(mySelectedTeam, "Paraguay");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 23:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Peru!";
                strcpy(mySelectedTeam, "Peru");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 24:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Portugal!";
                strcpy(mySelectedTeam, "Portugal");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 25:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Romania!";
                strcpy(mySelectedTeam, "Romania");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 26:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Scotland!";
                strcpy(mySelectedTeam, "Scotland");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 27:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose South Korea!";
                strcpy(mySelectedTeam, "South Korea");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 28:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Spain!";
                strcpy(mySelectedTeam, "Spain");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 29:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Sweden!";
                strcpy(mySelectedTeam, "Sweden");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 30:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Uruguay!";
                strcpy(mySelectedTeam, "Uruguay");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;

            case 31:
                system("cls");
                gotoXY(15, 5);
                cout << "You chose Wales!";
                strcpy(mySelectedTeam, "Wales");
                setTeam(mySelectedTeam);
                selectingTeam = false;
                break;
            }
        }
    }
    delay(1500);
    selectingTeam = false;
}

#endif
