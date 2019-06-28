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

    bool selectingLeague = true;
    int l = 6, selectedLeague = 0;

    bool selectingTeamLeague1 = true;
    int t1 = 6, selectedTeamLeague1 = 0;

    bool selectingTeamLeague2 = true;
    int t2 = 6, selectedTeamLeague2 = 0;

    bool selectingTeamLeague3 = true;
    int t3 = 6, selectedTeamLeague3 = 0;

    bool selectingTeamLeague4 = true;
    int t4 = 6, selectedTeamLeague4 = 0;

    bool selectingTeamLeague5 = true;
    int t5 = 6, selectedTeamLeague5 = 0;

    bool selectingTeamLeague6 = true;
    int t6 = 6, selectedTeamLeague6 = 0;

    gotoXY(15, 4);
    cout << "Select a League: ";
    gotoXY(16, 6);
    cout << "->";

    while (selectingLeague)
    {
        gotoXY(20, 6);
        cout << "1.     LaLiga Santander";
        gotoXY(20, 7);
        cout << "2.     Barclays Premier League";
        gotoXY(20, 8);
        cout << "3.     Bundesliga";
        gotoXY(20, 9);
        cout << "4.     France Ligue 1";
        gotoXY(20, 10);
        cout << "5.     Serie A";
        gotoXY(20, 11);
        cout << "6.     International";
        system("pause>nul");

        if (GetAsyncKeyState(VK_DOWN) && l != 11)
        {
            gotoXY(16, l);
            gotoXY(16, l);
            cout << "  ";
            l++;
            gotoXY(16, l);
            cout << "->";
            selectedLeague++;
            continue;
        }
        if (GetAsyncKeyState(VK_UP) && l != 6)
        {
            gotoXY(16, l);
            gotoXY(16, l);
            cout << "  ";
            l--;
            gotoXY(16, l);
            cout << "->";
            selectedLeague--;
            continue;
        }
        if (GetAsyncKeyState(VK_RETURN))
        {
            switch (selectedLeague)
            {
            case 0:
                system("cls");

                gotoXY(15, 5);
                cout << "You chose LaLiga Santander. Select a team: ";
                gotoXY(16, 6);
                cout << "->";
                while (selectingTeamLeague1)
                {
                    gotoXY(20, 6);
                    cout << "1.   Athletic Bilbao";
                    gotoXY(20, 7);
                    cout << "2.   Athletico Madrid";
                    gotoXY(20, 8);
                    cout << "3.   CA Osasuna";
                    gotoXY(20, 9);
                    cout << "4.   CD Leganes";
                    gotoXY(20, 10);
                    cout << "5.   Celta De Vigo";
                    gotoXY(20, 11);
                    cout << "6.   Deportivo Alaves";
                    gotoXY(20, 12);
                    cout << "7.   Elche CF";
                    gotoXY(20, 13);
                    cout << "8.   FC Barcelona";
                    gotoXY(20, 14);
                    cout << "9.   Getafe CF";
                    gotoXY(20, 15);
                    cout << "10.  Granada CF";
                    gotoXY(20, 16);
                    cout << "11.  Levante UD";
                    gotoXY(20, 17);
                    cout << "12.  Malaga CF";
                    gotoXY(20, 18);
                    cout << "13.  Rayo Valleceno";
                    gotoXY(20, 19);
                    cout << "14.  RCD Espanyol";
                    gotoXY(20, 20);
                    cout << "15.  Real Betis";
                    gotoXY(20, 21);
                    cout << "16.  Real Madrid";
                    gotoXY(20, 22);
                    cout << "17.  Real Sociedad";
                    gotoXY(20, 23);
                    cout << "18.  Real Valladolid";
                    gotoXY(20, 24);
                    cout << "19.  SD Eibar";
                    gotoXY(20, 25);
                    cout << "20.  Sevilla FC";
                    gotoXY(20, 26);
                    cout << "21.  UD Almeria";
                    gotoXY(20, 27);
                    cout << "22.  Valencia CF";
                    gotoXY(20, 28);
                    cout << "23.  Villarreal CF";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && t1 != 28)
                    {
                        gotoXY(16, t1);
                        gotoXY(16, t1);
                        cout << "  ";
                        t1++;
                        gotoXY(16, t1);
                        cout << "->";
                        selectedTeamLeague1++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && t1 != 6)
                    {
                        gotoXY(16, t1);
                        gotoXY(16, t1);
                        cout << "  ";
                        t1--;
                        gotoXY(16, t1);
                        cout << "->";
                        selectedTeamLeague1--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (selectedTeamLeague1)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Athletic Bilbao!";
                            strcpy(mySelectedTeam, "Athletic Bilbao");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Athletico Madrid!";
                            strcpy(mySelectedTeam, "Athletico Madrid");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose CA Osasuna!";
                            strcpy(mySelectedTeam, "CA Osasuna");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 3:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose CD Leganes!";
                            strcpy(mySelectedTeam, "CD Leganes");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 4:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Celta De Vigo!";
                            strcpy(mySelectedTeam, "Celta De Vigo");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 5:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Deportivo Alaves!";
                            strcpy(mySelectedTeam, "Deportivo Alaves");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 6:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Elche CF!";
                            strcpy(mySelectedTeam, "Elche CF");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 7:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Barcelona!";
                            strcpy(mySelectedTeam, "FC Barcelona");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 8:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Getafe CF!";
                            strcpy(mySelectedTeam, "Getafe CF");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 9:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Granada CF!";
                            strcpy(mySelectedTeam, "Granada CF");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 10:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Levante UD!";
                            strcpy(mySelectedTeam, "Levante UD");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 11:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Malaga CF!";
                            strcpy(mySelectedTeam, "Malaga CF");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 12:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Rayo Valleceno!";
                            strcpy(mySelectedTeam, "Rayo Valleceno");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 13:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose RCD Espanyol!";
                            strcpy(mySelectedTeam, "RCD Espanyol");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 14:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Real Betis!";
                            strcpy(mySelectedTeam, "Real Betis");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 15:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Real Madrid!";
                            strcpy(mySelectedTeam, "Real Madrid");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 16:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Real Sociedad!";
                            strcpy(mySelectedTeam, "Real Sociedad");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 17:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Real Valladolid!";
                            strcpy(mySelectedTeam, "Real Valladolid");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 18:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SD Eibar!";
                            strcpy(mySelectedTeam, "SD Eibar");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 19:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Sevilla FC!";
                            strcpy(mySelectedTeam, "Sevilla FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 20:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose UD Almeria!";
                            strcpy(mySelectedTeam, "UD Almeria");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 21:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Valencia CF!";
                            strcpy(mySelectedTeam, "Valencia CF");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;

                        case 22:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Villarreal CF!";
                            strcpy(mySelectedTeam, "Villarreal CF");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague1 = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                selectingLeague = false;
                break;

            case 1:
                system("cls");

                gotoXY(15, 5);
                cout << "You chose Barclays Premier League. Select a team: ";
                gotoXY(16, 6);
                cout << "->";
                while (selectingTeamLeague2)
                {
                    gotoXY(20, 6);
                    cout << "1.   AFC Bournemouth";
                    gotoXY(20, 7);
                    cout << "2.   Arsenal FC";
                    gotoXY(20, 8);
                    cout << "3.   Brighton & Hove Albion FC";
                    gotoXY(20, 9);
                    cout << "4.   Burnley FC";
                    gotoXY(20, 10);
                    cout << "5.   Cardiff City FC";
                    gotoXY(20, 11);
                    cout << "6.   Chelsea FC";
                    gotoXY(20, 12);
                    cout << "7.   Crystal Palace FC";
                    gotoXY(20, 13);
                    cout << "8.   Everton FC";
                    gotoXY(20, 14);
                    cout << "9.   Fulham FC";
                    gotoXY(20, 15);
                    cout << "10.  Huddersfield Town AFC";
                    gotoXY(20, 16);
                    cout << "11.  Leicester City FC";
                    gotoXY(20, 17);
                    cout << "12.  Liverpool FC";
                    gotoXY(20, 18);
                    cout << "13.  Manchester City FC";
                    gotoXY(20, 19);
                    cout << "14.  Manchester United FC";
                    gotoXY(20, 20);
                    cout << "15.  Newcastle United FC";
                    gotoXY(20, 21);
                    cout << "16.  Norwich City FC";
                    gotoXY(20, 22);
                    cout << "17.  Sheffield United FC";
                    gotoXY(20, 23);
                    cout << "18.  Southampton FC";
                    gotoXY(20, 24);
                    cout << "19.  Tottenham Hotspur FC";
                    gotoXY(20, 25);
                    cout << "20.  Watford FC";
                    gotoXY(20, 26);
                    cout << "21.  West Ham United FC";
                    gotoXY(20, 27);
                    cout << "22.  Wolverhampton Wanderers FC";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && t2 != 27)
                    {
                        gotoXY(16, t2);
                        gotoXY(16, t2);
                        cout << "  ";
                        t2++;
                        gotoXY(16, t2);
                        cout << "->";
                        selectedTeamLeague2++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && t2 != 6)
                    {
                        gotoXY(16, t2);
                        gotoXY(16, t2);
                        cout << "  ";
                        t2--;
                        gotoXY(16, t2);
                        cout << "->";
                        selectedTeamLeague2--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (selectedTeamLeague2)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AFC Bournemouth!";
                            strcpy(mySelectedTeam, "AFC Bournemouth");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Arsenal FC!";
                            strcpy(mySelectedTeam, "Arsenal FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Brighton & Hove Albion FC!";
                            strcpy(mySelectedTeam, "Brighton & Hove Albion FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 3:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Burnley FC!";
                            strcpy(mySelectedTeam, "Burnley FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 4:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Cardiff City FC!";
                            strcpy(mySelectedTeam, "Cardiff City FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 5:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Chelsea FC!";
                            strcpy(mySelectedTeam, "Chelsea FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 6:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Crystal Palace FC!";
                            strcpy(mySelectedTeam, "Crystal Palace FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 7:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Everton FC!";
                            strcpy(mySelectedTeam, "Everton FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 8:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Fulham FC!";
                            strcpy(mySelectedTeam, "Fulham FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 9:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Huddersfield Town AFC!";
                            strcpy(mySelectedTeam, "Huddersfield Town AFC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 10:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Leicester City FC!";
                            strcpy(mySelectedTeam, "Leicester City FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 11:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Liverpool FC!";
                            strcpy(mySelectedTeam, "Liverpool FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 12:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Manchester City FC!";
                            strcpy(mySelectedTeam, "Manchester City FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 13:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Manchester United FC!";
                            strcpy(mySelectedTeam, "Manchester United FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 14:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Newcastle United FC!";
                            strcpy(mySelectedTeam, "Newcastle United FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 15:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Norwich City FC!";
                            strcpy(mySelectedTeam, "Norwich City FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 16:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Sheffield United FC!";
                            strcpy(mySelectedTeam, "Sheffield United FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 17:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Southampton FC!";
                            strcpy(mySelectedTeam, "Southampton FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 18:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Tottenham Hotspur FC!";
                            strcpy(mySelectedTeam, "Tottenham Hotspur FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 19:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Watford FC!";
                            strcpy(mySelectedTeam, "Watford FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 20:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose West Ham United FC!";
                            strcpy(mySelectedTeam, "West Ham United FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;

                        case 21:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Wolverhampton Wanderers FC!";
                            strcpy(mySelectedTeam, "Wolverhampton Wanderers FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague2 = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                selectingLeague = false;
                break;

            case 2:
                system("cls");

                gotoXY(15, 5);
                cout << "You chose Bundesliga. Select a team: ";
                gotoXY(16, 6);
                cout << "->";
                while (selectingTeamLeague3)
                {
                    gotoXY(20, 6);
                    cout << "1.   1 FC Koln";
                    gotoXY(20, 7);
                    cout << "2.   1 FC Nurnberg";
                    gotoXY(20, 8);
                    cout << "3.   1 FC Union Berlin";
                    gotoXY(20, 9);
                    cout << "4.   1 FSV Mainz 05";
                    gotoXY(20, 10);
                    cout << "5.   Bayer 04 Leverkusen";
                    gotoXY(20, 11);
                    cout << "6.   Borussia Dortmund";
                    gotoXY(20, 12);
                    cout << "7.   Borusssia Monchengladbach";
                    gotoXY(20, 13);
                    cout << "8.   Eintracht Braunschweig";
                    gotoXY(20, 14);
                    cout << "9.   Eintracht Frankfurt";
                    gotoXY(20, 15);
                    cout << "10.  FC Augsburg";
                    gotoXY(20, 16);
                    cout << "11.  FC Bayern Munich";
                    gotoXY(20, 17);
                    cout << "12.  FC Schalke 04";
                    gotoXY(20, 18);
                    cout << "13.  Fortuna Dusseldorf";
                    gotoXY(20, 19);
                    cout << "14.  Hannover 96";
                    gotoXY(20, 20);
                    cout << "15.  Hertha BSC";
                    gotoXY(20, 21);
                    cout << "16.  RB Leipzig";
                    gotoXY(20, 22);
                    cout << "17.  SC Freiburg";
                    gotoXY(20, 23);
                    cout << "18.  SC Paderborn 07";
                    gotoXY(20, 24);
                    cout << "19.  SV Werder Bremen";
                    gotoXY(20, 25);
                    cout << "20.  TSG 1899 Hoffenheim";
                    gotoXY(20, 26);
                    cout << "21.  VfB Stuttgart";
                    gotoXY(20, 27);
                    cout << "22.  VfL Wolfsburg";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && t3 != 27)
                    {
                        gotoXY(16, t3);
                        gotoXY(16, t3);
                        cout << "  ";
                        t3++;
                        gotoXY(16, t3);
                        cout << "->";
                        selectedTeamLeague3++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && t3 != 6)
                    {
                        gotoXY(16, t3);
                        gotoXY(16, t3);
                        cout << "  ";
                        t3--;
                        gotoXY(16, t3);
                        cout << "->";
                        selectedTeamLeague3--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (selectedTeamLeague3)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose 1 FC Koln!";
                            strcpy(mySelectedTeam, "1 FC Koln");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose 1 FC Nurnberg!";
                            strcpy(mySelectedTeam, "1 FC Nurnberg");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose 1 FC Union Berlin!";
                            strcpy(mySelectedTeam, "1 FC Union Berlin");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 3:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose 1 FSV Mainz 05!";
                            strcpy(mySelectedTeam, "1 FSV Mainz 05");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 4:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Bayer 04 Leverkusen!";
                            strcpy(mySelectedTeam, "Bayer 04 Leverkusen");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 5:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Borussia Dortmund!";
                            strcpy(mySelectedTeam, "Borussia Dortmund");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 6:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Borusssia Monchengladbach!";
                            strcpy(mySelectedTeam, "Borusssia Monchengladbach");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 7:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Eintracht Braunschweig!";
                            strcpy(mySelectedTeam, "Eintracht Braunschweig");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 8:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Eintracht Frankfurt!";
                            strcpy(mySelectedTeam, "Eintracht Frankfurt");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 9:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Augsburg!";
                            strcpy(mySelectedTeam, "FC Augsburg");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 10:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Bayern Munich!";
                            strcpy(mySelectedTeam, "FC Bayern Munich");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 11:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Schalke 04!";
                            strcpy(mySelectedTeam, "FC Schalke 04");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 12:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Fortuna Dusseldorf!";
                            strcpy(mySelectedTeam, "Fortuna Dusseldorf");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 13:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Hannover 96!";
                            strcpy(mySelectedTeam, "Hannover 96");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 14:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Hertha BSC!";
                            strcpy(mySelectedTeam, "Hertha BSC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 15:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Norwich City FC!";
                            strcpy(mySelectedTeam, "Norwich City FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 16:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SC Freiburg!";
                            strcpy(mySelectedTeam, "SC Freiburg");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 17:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SC Paderborn 07!";
                            strcpy(mySelectedTeam, "SC Paderborn 07");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 18:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SV Werder Bremen!";
                            strcpy(mySelectedTeam, "SV Werder Bremen");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 19:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose TSG 1899 Hoffenheim!";
                            strcpy(mySelectedTeam, "TSG 1899 Hoffenheim");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 20:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose VfB Stuttgart!";
                            strcpy(mySelectedTeam, "VfB Stuttgart");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;

                        case 21:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose VfL Wolfsburg!";
                            strcpy(mySelectedTeam, "VfL Wolfsburg");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague3 = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                selectingLeague = false;
                break;

            case 3:
                system("cls");

                gotoXY(15, 5);
                cout << "You chose France Ligue 1. Select a team: ";
                gotoXY(16, 6);
                cout << "->";
                while (selectingTeamLeague4)
                {
                    gotoXY(20, 6);
                    cout << "1.   Amiens SC";
                    gotoXY(20, 7);
                    cout << "2.   Angers SCO";
                    gotoXY(20, 8);
                    cout << "3.   AS Monaco FC";
                    gotoXY(20, 9);
                    cout << "4.   AS Saint-Etienne";
                    gotoXY(20, 10);
                    cout << "5.   Dijon FCO";
                    gotoXY(20, 11);
                    cout << "6.   En Avant de Guingamp";
                    gotoXY(20, 12);
                    cout << "7.   FC Girondins de Bordeaux";
                    gotoXY(20, 13);
                    cout << "8.   FC Metz";
                    gotoXY(20, 14);
                    cout << "9.   FC Nantes";
                    gotoXY(20, 15);
                    cout << "10.  Lille OSC";
                    gotoXY(20, 16);
                    cout << "11.  Montpellier HSC";
                    gotoXY(20, 17);
                    cout << "12.  Nimes Olympique";
                    gotoXY(20, 18);
                    cout << "13.  OGC Nice";
                    gotoXY(20, 19);
                    cout << "14.  Olympique de Marseille";
                    gotoXY(20, 20);
                    cout << "15.  Olympique Lillois";
                    gotoXY(20, 21);
                    cout << "16.  Olympique Lyonnais";
                    gotoXY(20, 22);
                    cout << "17.  Paris Saint-Germain FC";
                    gotoXY(20, 23);
                    cout << "18.  RC Strasbourg Alsace";
                    gotoXY(20, 24);
                    cout << "19.  Stade Brestois 29";
                    gotoXY(20, 25);
                    cout << "20.  Stade de Reims";
                    gotoXY(20, 26);
                    cout << "21.  Stade Malherbe Caen";
                    gotoXY(20, 27);
                    cout << "22.  Stade Rennais FC";
                    gotoXY(20, 28);
                    cout << "23.  Toulouse FC";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && t4 != 28)
                    {
                        gotoXY(16, t4);
                        gotoXY(16, t4);
                        cout << "  ";
                        t4++;
                        gotoXY(16, t4);
                        cout << "->";
                        selectedTeamLeague4++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && t4 != 6)
                    {
                        gotoXY(16, t4);
                        gotoXY(16, t4);
                        cout << "  ";
                        t4--;
                        gotoXY(16, t4);
                        cout << "->";
                        selectedTeamLeague4--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (selectedTeamLeague4)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Amiens SC!";
                            strcpy(mySelectedTeam, "Amiens SC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Angers SCO!";
                            strcpy(mySelectedTeam, "Angers SCO");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AS Monaco FC!";
                            strcpy(mySelectedTeam, "AS Monaco FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 3:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AS Saint-Etienne!";
                            strcpy(mySelectedTeam, "AS Saint-Etienne");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 4:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Dijon FCO!";
                            strcpy(mySelectedTeam, "Dijon FCO");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 5:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose En Avant de Guingamp!";
                            strcpy(mySelectedTeam, "En Avant de Guingamp");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 6:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Girondins de Bordeaux!";
                            strcpy(mySelectedTeam, "FC Girondins de Bordeaux");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 7:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Metz!";
                            strcpy(mySelectedTeam, "FC Metz");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 8:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose FC Nantes!";
                            strcpy(mySelectedTeam, "FC Nantes");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 9:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Lille OSC!";
                            strcpy(mySelectedTeam, "Lille OSC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 10:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Montpellier HSC!";
                            strcpy(mySelectedTeam, "Montpellier HSC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 11:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Nimes Olympique!";
                            strcpy(mySelectedTeam, "Nimes Olympique");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 12:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose OGC Nice!";
                            strcpy(mySelectedTeam, "OGC Nice");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 13:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Olympique de Marseille!";
                            strcpy(mySelectedTeam, "Olympique de Marseille");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 14:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Olympique Lillois!";
                            strcpy(mySelectedTeam, "Olympique Lillois");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 15:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Olympique Lyonnais!";
                            strcpy(mySelectedTeam, "Olympique Lyonnais");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 16:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Paris Saint-Germain FC!";
                            strcpy(mySelectedTeam, "Paris Saint-Germain FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 17:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose RC Strasbourg Alsace!";
                            strcpy(mySelectedTeam, "RC Strasbourg Alsace");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 18:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Stade Brestois 29!";
                            strcpy(mySelectedTeam, "Stade Brestois 29");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 19:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Stade de Reims!";
                            strcpy(mySelectedTeam, "Stade de Reims");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 20:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Stade Malherbe Caen!";
                            strcpy(mySelectedTeam, "Stade Malherbe Caen");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 21:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Stade Rennais FC!";
                            strcpy(mySelectedTeam, "Stade Rennais FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;

                        case 22:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Toulouse FC!";
                            strcpy(mySelectedTeam, "Toulouse FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague4 = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                selectingLeague = false;
                break;

            case 4:
                system("cls");

                gotoXY(15, 5);
                cout << "You chose Serie A. Select a team: ";
                gotoXY(16, 6);
                cout << "->";
                while (selectingTeamLeague5)
                {
                    gotoXY(20, 6);
                    cout << "1.   AC Cesena";
                    gotoXY(20, 7);
                    cout << "2.   AC Milan";
                    gotoXY(20, 8);
                    cout << "3.   ACF Fiorentina";
                    gotoXY(20, 9);
                    cout << "4.   AS Livorno Calcio";
                    gotoXY(20, 10);
                    cout << "5.   AS Roma";
                    gotoXY(20, 11);
                    cout << "6.   Atalanta BC";
                    gotoXY(20, 12);
                    cout << "7.   Bologna FC 1909";
                    gotoXY(20, 13);
                    cout << "8.   Brescia Calcio";
                    gotoXY(20, 14);
                    cout << "9.   Cagliari Calcio";
                    gotoXY(20, 15);
                    cout << "10.  Calcio Catania";
                    gotoXY(20, 16);
                    cout << "11.  Empoli FC";
                    gotoXY(20, 17);
                    cout << "12.  Fortitudo-Pro Roma SGS";
                    gotoXY(20, 18);
                    cout << "13.  Frosinone Calcio";
                    gotoXY(20, 19);
                    cout << "14.  Genoa CFC";
                    gotoXY(20, 20);
                    cout << "15.  Inter Milan";
                    gotoXY(20, 21);
                    cout << "16.  Juventus FC";
                    gotoXY(20, 22);
                    cout << "17.  Parma Calcio 1913";
                    gotoXY(20, 23);
                    cout << "18.  SC ChievoVerona";
                    gotoXY(20, 24);
                    cout << "19.  SS Alba-Audace Roma";
                    gotoXY(20, 25);
                    cout << "20.  SS Lazio";
                    gotoXY(20, 26);
                    cout << "21.  SSC Napoli";
                    gotoXY(20, 27);
                    cout << "22.  Torino FC";
                    gotoXY(20, 28);
                    cout << "23.  UC Sampdoria";
                    gotoXY(20, 29);
                    cout << "24.  Udinese Calcio";
                    gotoXY(20, 30);
                    cout << "25.  US Citta di Palermo";
                    gotoXY(20, 31);
                    cout << "26.  US Lecce";
                    gotoXY(20, 32);
                    cout << "27.  US Sassuolo Calcio";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && t5 != 32)
                    {
                        gotoXY(16, t5);
                        gotoXY(16, t5);
                        cout << "  ";
                        t5++;
                        gotoXY(16, t5);
                        cout << "->";
                        selectedTeamLeague5++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && t5 != 6)
                    {
                        gotoXY(16, t5);
                        gotoXY(16, t5);
                        cout << "  ";
                        t5--;
                        gotoXY(16, t5);
                        cout << "->";
                        selectedTeamLeague5--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (selectedTeamLeague5)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AC Cesena!";
                            strcpy(mySelectedTeam, "AC Cesena");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AC Milan!";
                            strcpy(mySelectedTeam, "AC Milan");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose ACF Fiorentina!";
                            strcpy(mySelectedTeam, "ACF Fiorentina");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 3:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AS Livorno Calcio!";
                            strcpy(mySelectedTeam, "AS Livorno Calcio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 4:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose AS Roma!";
                            strcpy(mySelectedTeam, "AS Roma");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 5:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Atalanta BC!";
                            strcpy(mySelectedTeam, "Atalanta BC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 6:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Bologna FC 1909!";
                            strcpy(mySelectedTeam, "Bologna FC 1909");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 7:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Brescia Calcio!";
                            strcpy(mySelectedTeam, "Brescia Calcio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 8:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Cagliari Calcio!";
                            strcpy(mySelectedTeam, "Cagliari Calcio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 9:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Calcio Catania!";
                            strcpy(mySelectedTeam, "Calcio Catania");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 10:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Empoli FC!";
                            strcpy(mySelectedTeam, "Empoli FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 11:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Fortitudo-Pro Roma SGS!";
                            strcpy(mySelectedTeam, "Fortitudo-Pro Roma SGS");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 12:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Frosinone Calcio!";
                            strcpy(mySelectedTeam, "Frosinone Calcio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 13:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Genoa CFC!";
                            strcpy(mySelectedTeam, "Genoa CFC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 14:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Inter Milan!";
                            strcpy(mySelectedTeam, "Inter Milan");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 15:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Juventus FC!";
                            strcpy(mySelectedTeam, "Juventus FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 16:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Parma Calcio 1913!";
                            strcpy(mySelectedTeam, "Parma Calcio 1913");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 17:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SC ChievoVerona!";
                            strcpy(mySelectedTeam, "SC ChievoVerona");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 18:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SS Alba-Audace Roma!";
                            strcpy(mySelectedTeam, "SS Alba-Audace Roma");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 19:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SS Lazio!";
                            strcpy(mySelectedTeam, "SS Lazio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 20:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose SSC Napoli!";
                            strcpy(mySelectedTeam, "SSC Napoli");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 21:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Torino FC!";
                            strcpy(mySelectedTeam, "Torino FC");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 22:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose UC Sampdoria!";
                            strcpy(mySelectedTeam, "UC Sampdoria");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 23:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Udinese Calcio!";
                            strcpy(mySelectedTeam, "Udinese Calcio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 24:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose US Citta di Palermo!";
                            strcpy(mySelectedTeam, "US Citta di Palermo");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 25:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose US Lecce!";
                            strcpy(mySelectedTeam, "US Lecce");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;

                        case 26:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose US Sassuolo Calcio!";
                            strcpy(mySelectedTeam, "US Sassuolo Calcio");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague5 = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                selectingLeague = false;
                break;

            case 5:
                system("cls");

                gotoXY(15, 5);
                cout << "You chose International. Select a team: ";
                gotoXY(16, 6);
                cout << "->";
                while (selectingTeamLeague6)
                {
                    gotoXY(20, 6);
                    cout << "1.   Argentina";
                    gotoXY(20, 6);
                    cout << "2.   Australia";
                    gotoXY(20, 7);
                    cout << "3.   Belgium";
                    gotoXY(20, 8);
                    cout << "4.   Brazil";
                    gotoXY(20, 9);
                    cout << "5.   Colombia";
                    gotoXY(20, 10);
                    cout << "6.   Costa Rica";
                    gotoXY(20, 11);
                    cout << "7.   Croatia";
                    gotoXY(20, 12);
                    cout << "8.   Czechia";
                    gotoXY(20, 13);
                    cout << "9.   England";
                    gotoXY(20, 14);
                    cout << "10.   France";
                    gotoXY(20, 15);
                    cout << "11.  Germany";
                    gotoXY(20, 16);
                    cout << "12.  Ghana";
                    gotoXY(20, 17);
                    cout << "13.  Hungary";
                    gotoXY(20, 18);
                    cout << "14.  Iran";
                    gotoXY(20, 19);
                    cout << "15.  Israel";
                    gotoXY(20, 20);
                    cout << "16.  Italy";
                    gotoXY(20, 21);
                    cout << "17.  Kosovo";
                    gotoXY(20, 22);
                    cout << "18.  Mexico";
                    gotoXY(20, 23);
                    cout << "19.  Montenegro";
                    gotoXY(20, 24);
                    cout << "20.  Netherlands";
                    gotoXY(20, 25);
                    cout << "21.  Nigeria";
                    gotoXY(20, 26);
                    cout << "22.  Northern Ireland";
                    gotoXY(20, 27);
                    cout << "23.  Paraguay";
                    gotoXY(20, 28);
                    cout << "24.  Peru";
                    gotoXY(20, 29);
                    cout << "25.  Portugal";
                    gotoXY(20, 30);
                    cout << "26.  Romania";
                    gotoXY(20, 31);
                    cout << "27.  Scotland";
                    gotoXY(20, 32);
                    cout << "28.  South Korea";
                    gotoXY(20, 33);
                    cout << "29.  Spain";
                    gotoXY(20, 34);
                    cout << "30.  Sweden";
                    gotoXY(20, 35);
                    cout << "31.  Uruguay";
                    gotoXY(20, 36);
                    cout << "32.  Wales";
                    system("pause>nul");
                    if (GetAsyncKeyState(VK_DOWN) && t6 != 37)
                    {
                        gotoXY(16, t6);
                        gotoXY(16, t6);
                        cout << "  ";
                        t6++;
                        gotoXY(16, t6);
                        cout << "->";
                        selectedTeamLeague6++;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_UP) && t6 != 6)
                    {
                        gotoXY(16, t6);
                        gotoXY(16, t6);
                        cout << "  ";
                        t6--;
                        gotoXY(16, t6);
                        cout << "->";
                        selectedTeamLeague6--;
                        continue;
                    }
                    if (GetAsyncKeyState(VK_RETURN))
                    {
                        switch (selectedTeamLeague6)
                        {
                        case 0:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Argentina!";
                            strcpy(mySelectedTeam, "Argentina");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;
                        case 1:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Australia!";
                            strcpy(mySelectedTeam, "Australia");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 2:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Belgium!";
                            strcpy(mySelectedTeam, "Belgium");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 3:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Brazil!";
                            strcpy(mySelectedTeam, "Brazil");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 4:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Colombia!";
                            strcpy(mySelectedTeam, "Colombia");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 5:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Costa Rica!";
                            strcpy(mySelectedTeam, "Costa Rica");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 6:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Croatia!";
                            strcpy(mySelectedTeam, "Croatia");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 7:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Czechia!";
                            strcpy(mySelectedTeam, "Czechia");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 8:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose England!";
                            strcpy(mySelectedTeam, "England");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 9:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose France!";
                            strcpy(mySelectedTeam, "France");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 10:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Germany!";
                            strcpy(mySelectedTeam, "Germany");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 11:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Ghana!";
                            strcpy(mySelectedTeam, "Ghana");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 12:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Hungary!";
                            strcpy(mySelectedTeam, "Hungary");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 13:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Iran!";
                            strcpy(mySelectedTeam, "Iran");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 14:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Israel!";
                            strcpy(mySelectedTeam, "Israel");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 15:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Italy!";
                            strcpy(mySelectedTeam, "Italy");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 16:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Kosovo!";
                            strcpy(mySelectedTeam, "Kosovo");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 17:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Mexico!";
                            strcpy(mySelectedTeam, "Mexico");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 18:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Montenegro!";
                            strcpy(mySelectedTeam, "Montenegro");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 19:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Netherlands!";
                            strcpy(mySelectedTeam, "Netherlands");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 20:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Nigeria!";
                            strcpy(mySelectedTeam, "Nigeria");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 21:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Northern Ireland!";
                            strcpy(mySelectedTeam, "Northern Ireland");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 22:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Paraguay!";
                            strcpy(mySelectedTeam, "Paraguay");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 23:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Peru!";
                            strcpy(mySelectedTeam, "Peru");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 24:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Portugal!";
                            strcpy(mySelectedTeam, "Portugal");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 25:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Romania!";
                            strcpy(mySelectedTeam, "Romania");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 26:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Scotland!";
                            strcpy(mySelectedTeam, "Scotland");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 27:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose South Korea!";
                            strcpy(mySelectedTeam, "South Korea");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 28:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Spain!";
                            strcpy(mySelectedTeam, "Spain");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 29:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Sweden!";
                            strcpy(mySelectedTeam, "Sweden");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 30:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Uruguay!";
                            strcpy(mySelectedTeam, "Uruguay");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;

                        case 31:
                            system("cls");
                            gotoXY(15, 5);
                            cout << "You chose Wales!";
                            strcpy(mySelectedTeam, "Wales");
                            setTeam(mySelectedTeam);
                            selectingTeamLeague6 = false;
                            break;
                        }
                    }
                }
                system("pause>nul");
                selectingLeague = false;
                break;
            }
        }
    }
}

#endif