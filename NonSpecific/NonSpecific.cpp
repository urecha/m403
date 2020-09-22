/*******************************************************************************
* Programm: NonSpecific
* Filename: NonSpecific.cpp
*
* Autor:      Andrin Urech
* Version:    1.0
* Datum:      duh, today
*
* Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit):
* 1.0
********************************************************************************
*
* Verwendungszweck: C-Schulung, M304
*
* Beschreibung: Nothing specific
*
*
* Precondition:  -Nothing specific
*
* Postcondition: -Nothing specific
*
* Benötigte Libraries:
* - iostream
*
* Copyright (c) 2020 by Andrin Urech
*******************************************************************************/

/***  Include Files ***********************************************************/
#include <iostream> 
#include <string>

using namespace std;

/***  Globale Deklarationen und Definitionen **********************************/


/***  Funktions-Deklarationen *************************************************/
#pragma region Funktinos-Deklarationen
string calcQuersumme(string number);
#pragma endregion


/*******************************************************************************
******************************* HAUPTPROGRAMM **********************************
*******************************************************************************/

int main()
{
    string number;

    cout << "Niques-toi!" << endl;
    cin >> number;

    if (number.length() != 1) {
        number = calcQuersumme(number);
    }
     cout << "Ca fait donc " << number << endl;

}

/*******************************************************************************
*************************** FUNKTIONS-DEFINITIONEN *****************************
*******************************************************************************/

/*******************************************************************************
* Funktion: calcQuersumme()
* Source: 	NonSpecific.cpp
* Call:     main()
*
* Autor:     Andrin Urech
* Version:   1.0
* Datum:    today
*
* Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt):
* 1.0
********************************************************************************
*
* Verwendungszweck: C-Schulung, M403
*
* Beschreibung: Calculates a quersum
*
*
* Precondition: -
*
* Postcondition: -
*
* Benötigte Unterprogramme: none
*
* Parameter: (I: Input, O: Output, U: Update, R: Return)
*   I: string number, to calculate it's quersumme
*   O: none
*   U: none
*   R: quersum of input number
*
* Copyright (c) 2020 by Andrin Urech
*******************************************************************************/
string calcQuersumme(string number) {
    int quersumme = 0;
    for (int i = 0; i < number.length(); i++) {
        int j = i + 1;
        int digit = stoi(number.substr(i, 1));
        quersumme += digit;
    }
    string quersummeIntermediate = std::to_string(quersumme);
    if (quersummeIntermediate.length() != 1) {
        return calcQuersumme(quersummeIntermediate);
    }
    return std::to_string(quersumme);
}
