/*
* Name: Hangman
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
    * TicTacToe, dude. What else?
    *
    *Precondition Tic und Tac
    *
    *Postcondition : Toe
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

int main()
{
    string word;
    int life;
    int errors;

    printf_s("How many lifes?\n");
    scanf_s("%d", &life);

    printf_s("Which word?\n");
    scanf_s("%s", &word);

    //maybe put the string in a character array to facilitate further procedures

    return 0;
}

