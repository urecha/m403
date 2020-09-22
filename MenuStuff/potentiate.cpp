/*
* Name: Potentiate
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

long potentiate(long base, long exponent) {
    int result;
    result = exponent > 0 ? base : 1;
    while (exponent > 1) {
        result *= base;
        exponent--;
    }
    return result;
}