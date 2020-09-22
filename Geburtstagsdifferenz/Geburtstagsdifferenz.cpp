/*
* Name: Geburtstagsdifferenz
* Version:    1.0
* Datum : 09/2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung : The name says it all. Don't use libraries to do it for you
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>
#include <string>

using namespace std;

//***  Function declarations ***********************************************************
#pragma region Function declarations
int calcDifference(int dayOne, int dayTwo, int monthOne, int monthTwo, int yearOne, int yearTwo);
int yearDifference(int yearOne, int yearTwo);
int monthDifference(int monthOne, int monthTwo);
int dayDifference(int dayOne, int dayTwo);
int numberOfSchaltjahre(int firstYear, int lastYear);
int daysInMonth(int month);
#pragma endregion

/*******************************************************************************
******************************* MAIN **********************************
*******************************************************************************/

#include <iostream>

int main()
{
    string birthdayOne, birthdayTwo;

    printf("Veuillez entrer les deux anniversaires en form JJ/MM/AAAA\n");
    cin >> birthdayOne;
    string dOne = birthdayOne.substr(0, 2); int dayOne = stoi(dOne);
    string mOne = birthdayOne.substr(3, 5); int monthOne = stoi(mOne);
    string yOne = birthdayOne.substr(6, 10); int yearOne = stoi(yOne);

    cin >> birthdayTwo;
    string dTwo = birthdayTwo.substr(0, 2); int dayTwo = stoi(dTwo);
    string mTwo = birthdayTwo.substr(3, 5); int monthTwo = stoi(mTwo);
    string yTwo = birthdayTwo.substr(6, 10); int yearTwo = stoi(yTwo);

    cout << calcDifference(dayOne, dayTwo, monthOne, monthTwo, yearOne, yearTwo) << endl;
}

int calcDifference(int dayOne, int dayTwo, int monthOne, int monthTwo, int yearOne, int yearTwo) {
    int difference = 0;
    if (yearOne != yearTwo) {
        difference += yearDifference(yearOne, yearTwo);
    }
    if (monthOne != monthTwo) {
        difference += monthDifference(monthOne, monthTwo);
        difference += (monthOne < monthTwo) ? (daysInMonth(monthOne) - dayOne) + (dayTwo) : (daysInMonth(monthTwo) - dayTwo) + dayOne;
    }
    else if (dayOne != dayTwo) {
        difference += dayDifference(dayOne, dayTwo);
    }
    return difference;
}

int yearDifference(int yearOne, int yearTwo) {
    int difference = 0;
    if (yearOne != yearTwo) {
        int yearDifference;
        int schaltjahre;
        if (yearOne > yearTwo) {
            yearDifference = yearOne - yearTwo;
            schaltjahre = numberOfSchaltjahre(yearTwo, yearOne);
        }
        else {
            yearDifference = yearTwo - yearOne;
            schaltjahre = numberOfSchaltjahre(yearOne, yearTwo);
        }
        cout << "Yrdif: " << yearDifference << endl;
        if (yearDifference < 2) return 0;
        difference += ((yearDifference - schaltjahre) * 365) + (schaltjahre * 366);
    }
    return difference;
}

int monthDifference(int monthOne, int monthTwo) {
    int monthDifference = (monthOne > monthTwo) ? monthOne - monthTwo : monthTwo - monthOne;
    cout << "Mnthdif: " << monthDifference << endl;
    int difference = 0;
    if (monthDifference < 2) {
        cout << "Mnthdiff < 2" << endl;
        return difference;
    }
    if (monthOne < monthTwo) {
        for (int i = monthOne + 1; i < monthTwo; i++) {
            difference += daysInMonth(i);
            cout << "Mthdiff in days now at: " << difference << endl;
        }
    }
    else {
        for (int i = monthTwo + 1; i < monthOne; i++) {
            difference += daysInMonth(i);
            cout << "Mthdiff in days now at: " << difference << endl;
        }
    }
    cout << "Mnthdif in days: " << difference << endl;
    return difference;
}

int dayDifference(int dayOne, int dayTwo) {
    int difference = (dayOne > dayTwo) ? dayOne - dayTwo : dayTwo - dayOne;
    cout << "Daydiff: " << difference << endl;
    return difference;
}

int numberOfSchaltjahre(int firstYear, int lastYear) {
    int number = 0;
    for (int year = firstYear; year <= lastYear; year++) {
        if ((year % 4 == 0 && year % 100 != 0) or year % 400 == 0) {
            number++;
        }
    }
    cout << "#Schaltjahre: " << number << endl;
    return number;
}

int daysInMonth(int month) {
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: return 31;
    case 4:
    case 6:
    case 9:
    case 11: return 30;
    case 2: return 28;
    default: return 0;
    }
}
