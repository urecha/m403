/*
* Name: Fakultätrechner
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
    * Berechnet Fakultät einer gegebenen Zahl
    *
    *Precondition Beliebige natürliche Zahl
    *
    *Postcondition : Fakultät dieser Zahl
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
    int number;
    int sum = 1;

    do {
        printf_s("Whass yo numba (between 1 and 10)?\n");
        scanf_s("%d", &number);
    } while (number <= 0 || number > 10);

    while (number > 1) {
        sum = sum * number;
        number--;
    }

    printf_s("Fakultät davon ist %d\n", sum);
    printf_s("Teehee!");


    return 0;
}


