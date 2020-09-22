/*
* Name: ControlStructures
* Version:    1.0
* Datum : 09/2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung : Exercises about control structures
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>
#include <list>

using namespace std;

/*******************************************************************************
******************************* SCHALTJAHRE **********************************
*******************************************************************************/


//int main()
//{
//    int firstYear;
//    int lastYear;
//    bool endInput = false;
//    cout << "Enter two years!" << endl;
//    cin >> firstYear >> lastYear;
//
//    printf_s("Schaltjahre sind folgende: \n");
//    for (int year = firstYear; year <= lastYear; year++) {
//        if ((year % 4 == 0 && year % 100 != 0) or year % 400 == 0) {
//            printf_s("%d\n", year);
//        }
//    }
//}

/*******************************************************************************
******************************* ASCII TABLE **********************************
*******************************************************************************/


//int main() {
//    for (int i = 0; i < 8; i++) {
//        printf_s("S DEC\t");
//    }
//    for (int row = 0; row < 16; row++) {
//        printf_s("\n");
//        for (int column = 0; column < 8; column++) {
//            //printf_s("%c %d\t", column * 16 + row, column * 16 + row);
//            int dec = column * 16 + row;
//            if (dec < 32) {
//                printf_s("N/A %d\t", dec);
//            }
//            else {
//                printf_s("%c %d\t", dec, dec);
//            }
//        }    
//    }
//}


/*******************************************************************************
******************************* Ein mal eins **********************************
*******************************************************************************/


//int main() {
//    int startX, startY;
//    cout << "Enter your starting x and y" << endl;
//    cin >> startX >> startY;
//
//    for (int x = startX-1; x < 10; x++) {
//        if (x < startX) {
//            cout << 0 << "\t";
//        }
//        else {
//            cout << x << "\t";
//        }
//    }
//    for (int y = startY; y < 10; y++) {
//        cout << endl;
//        cout << y << "\t";
//        for (int x = startX; x < 10; x++) {
//            cout << x*y << "\t";
//        }
//    }
//}

/*******************************************************************************
******************************* Potenzierung **********************************
*******************************************************************************/

//int main() {
//    int base;
//    int exponent;
//    int result;
//
//    do {
//        cout << "Base and exponent please" << endl;
//        cin >> base >> exponent;
//    } while (base < 1 || exponent < 1);
//
//    result = exponent > 0 ? base : 1;
//    
//    while (exponent > 1) {
//        result *= base;
//        exponent--;
//    }
//
//    cout << "That'll be " << result;
//}

/*******************************************************************************
******************************* Factorial **********************************
*******************************************************************************/

long calcFactorial(long posNumber) {
    long factorial = posNumber > 1 ? posNumber : 1;
        for (long factor = posNumber-1; factor > 1; factor--) {
            factorial *= factor;
        }
    return factorial;
}

void findMaxFactorial() {
    for (long factorial = 1; factorial < 50; factorial++) {
        long result = calcFactorial(factorial);
        cout << "Factorial for " << factorial << " is " << result << endl;
    }
}

int main() {
    long number;
    do {
        cout << "Enter a number between 1 and 16 included" << endl;
        cin >> number;
    } while (number <= 0 || number > 16);
    cout << "Factorial of " << number << " is " << calcFactorial(number) << endl;

    //findMaxFactorial();
}