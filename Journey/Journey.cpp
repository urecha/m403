/*
* Name: Journey
* Version:    1.0
* Datum : 28.08.2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung : Some dungeons and dragons ripoff
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>
#include <string>

/*******************************************************************************
******************************* HAUPTPROGRAMM **********************************
*******************************************************************************/

#include <iostream>

int main()
{
    printf("The journey begins.\n");
    printf("Which way do you choose? Left or right?");

    string answer;
    scanf_s("%s", &answer);

    printf("So. %s shall it be.", answer);

}
