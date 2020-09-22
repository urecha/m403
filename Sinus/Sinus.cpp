/*
* Name: Sinus
* Version:    1.0
* Datum : 09/2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung : Abbreviates the sinus value of a given angle
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

#define _USE_MATH_DEFINES

//***  Include Files ***********************************************************
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

//***  Function declarations **********************************************************
#pragma region Function declarations
double calcSinusAbbreviation(double angle, int precision);
long calcFactorial(long posNumber);
#pragma endregion

/*******************************************************************************
******************************* MAIN **********************************
*******************************************************************************/

int main()
{
    double angle;

    cout << "Un angle entre 0 et 360 degre svp." << endl;
    cin >> angle;

    angle = angle * (M_PI / 180);
    double sinus;
    if (angle < M_PI) {
        sinus = calcSinusAbbreviation(angle, 7);
    }
    else if (angle >= M_PI_2 && angle < M_PI) {
        sinus = calcSinusAbbreviation(M_PI - angle, 7);
    }
    else if (angle >= M_PI && angle < 3 * M_PI_2) {
        sinus = -calcSinusAbbreviation(M_PI - (M_PI - (angle - M_PI)), 7);
    }
    else if (angle >= 3 * M_PI_2) {
        sinus = -calcSinusAbbreviation(M_PI_2 - (angle - 3 * M_PI_2), 7);
    }

    cout << "Angle en radian: " << angle << endl;
    cout << "Sinus: " << sinus << endl;

    cout << "Valeur de Math.h: " << sin(angle) << endl;
}

double calcSinusAbbreviation(double angle, int precision) {
    double sinus = 0;
    for (int i = 0; i <= precision; i++) {
        sinus += (pow(-1, i) * (pow(angle, (2*i)+1) / calcFactorial((2*i)+1)));
    }
    return sinus;
}

long calcFactorial(long posNumber) {
    long factorial = posNumber > 1 ? posNumber : 1;
    for (long factor = posNumber - 1; factor > 1; factor--) {
        factorial *= factor;
    }
    return factorial;
}