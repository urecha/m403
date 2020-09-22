/*
* Name: calcFactorial
* Version:    1.0
* Datum : 09/2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung : Testing importing of other files/functions
    *
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/


long calcFactorial(long posNumber) {
    long factorial = posNumber > 1 ? posNumber : 1;
    for (long factor = posNumber - 1; factor > 1; factor--) {
        factorial *= factor;
    }
    return factorial;
}
