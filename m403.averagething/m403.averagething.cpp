/*
* Name: AverageThing
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
    * Programm zur Bestimmung irgendeines Durchschnittes. Nur eine Übung.
    *
    *Precondition Anzahl Ziffern und Divisor
    *
    *Postcondition : Der olle Durchschnitt eben
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>
#include <cmath>

/*******************************************************************************
******************************* HAUPTPROGRAMM **********************************
*******************************************************************************/

int main()
{
    int digits;
    int divisor;
    int sum = 0;
    int numbers = 0;

    printf_s("How many digits?\n");
    scanf_s("%d", &digits);

    printf_s("What's your divisor?\n");
    scanf_s("%d", &divisor);

    for (int number = 1; number < (int) pow(10, digits); number++) {
        if (number % divisor == 0) {
            sum += number;
            numbers++;
        }
    }
    printf_s("\nAverage is %d", (sum / numbers));
}


