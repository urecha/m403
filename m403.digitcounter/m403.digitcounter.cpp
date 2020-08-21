/*
* Name: DigitCounter
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
    * Programm zur Bestimmung der Anzahl einer wiederkehrenden Ziffer in einer Zahl
    *
    *Precondition Beliebige ganze Zahl und gesuchte Ziffer
    *
    *Postcondition : Anzahl Vorkommen der Ziffer in der Zahl
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>

/*******************************************************************************
******************************* HAUPTPROGRAMM **********************************
*******************************************************************************/
int main()
{
    int digit;
    int number;
    int appearances = 0;

    printf_s("What digit are you looking for?\n");
    scanf_s("%d", &digit);
    
    printf_s("What's the number you wanna look for the digit in?\n");
    scanf_s("%d", &number);

    while (number > 0) {
        int rest = number % 10;
        if (rest == digit) {
            appearances++;
        }
        number = number / 10;
    }
    printf_s("The digit %d appears %d times in %d", digit, appearances, number);


    return 0;
}



