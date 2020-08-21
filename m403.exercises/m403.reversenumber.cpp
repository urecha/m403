/*
* Name: Reversenumber
* Version:    1.0
* Datum : 21.08.2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung :
    * Programm zum Umkehren einer Zahl.
    *
    *Precondition Beliebige ganze Zahl
    *
    *Postcondition : Umgekehrte Zahl
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

#include <iostream>

int main()
{
    int number = 0;
    int rest = 0;
    int reverseNumber = 0;

    printf_s("Geben Sie die zu spiegelnde Nummer ein: ");
    scanf_s("%d", &number);

    while (number != 0) {
        rest = number % 10;
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + rest;
    }

    printf_s("\n Spiegelnummer ist: %d", reverseNumber);

    return 0;
}
