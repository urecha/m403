/*
* Name: Rechner
* Version:    1.0
* Datum : 09/2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung : Exercises about menus and enums and controlstructures
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>
#include <list>

using namespace std;

//***  Function declarations ***********************************************************
#pragma region Function declarations
void mainMenu();
void addition(bool isSubtraction = false);
void multiplication(bool isDivision = false);
void factorialMenu();
long calcFactorial(long posNumber);
void potentiationMenu();
long potentiate(long base, long exponent);
#pragma endregion

/*******************************************************************************
******************************* MAIN **********************************
*******************************************************************************/

int main()
{
    cout << "Bienvenue! Je vais vous servir comme calculatrice!" << endl;
    mainMenu();
}

enum MenuOption {
    ADD = 'a',
    MULTIPLY = 'm',
    DIVIDE = 'd',
    SUBTRACT = 's',
    FACTORIAL = 'f',
    POTENTIATION = 'p',
    QUIT = 'q',
    RESET = 'r',
    CONTINUE = 'c'
};

void mainMenu() {

    char option;
    do {
        cout << "Qu'aimeriez vous que je fasse?" << endl;
        cout << "A: addition | M: Multiplication | D: division | S: subtraction | F: Facrotiel | P: Potentiation | Q: quitter" << endl;
        cin >> option;
        switch (option) {
            case ADD:{
                addition();
                break;
                }
            case MULTIPLY: {
                multiplication();
                break;
            }
            case DIVIDE: {
                multiplication(true);
                break;
            }
            case SUBTRACT: {
                addition(true);
                break;
            }
            case FACTORIAL: {
                factorialMenu();
                break;
            }
            case POTENTIATION: {
                potentiationMenu();
                break;
            }
            default: {
            }
        }
    } while (option != QUIT);
}

void addition(bool isSubtraction) {
    cout << "Addition: Entrez deux nombres et je vais les additioner." << endl;
    if (isSubtraction) {
        cout << "Pour subtraher, entrez des nombres négatifs." << endl;
    }
    char input;
    float sum = 0;
    float numberOne;
    float numberTwo;
    do {
        if (sum != 0) {
            cout << "Somme actuelle: " << sum << endl;
        }
        cin >> numberOne;
        if (sum == 0) {
            cin >> numberTwo;
        }
        else {
            numberTwo = 0;
        }
        sum += numberOne + numberTwo;
        cout << " = " << sum << endl;

        cout << "Q: Menu principal | R: Effacement du résultat intermediaire | C: Continuer" << endl;
        cin >> input;
        if (input == RESET) {
            sum = 0;
            system("cls");
            cout << "Addition: Entrez deux nombres et je vais les additioner." << endl;
            if (isSubtraction) {
                cout << "Pour subtraher, entrez des nombres négatifs." << endl;
            }
        }
    } while (input != QUIT);
    system("cls");
}

void multiplication(bool isDivision) {
    if (!isDivision) {
        cout << "Multiplication: Entrez deux nombres et je vais les multiplier." << endl;
    }
    else {
        cout << "Division: Entrez dividende et puis diviseur." << endl;
    }
    char input;
    float result = 1;
    float numberOne;
    float numberTwo;
    do {
        if (result != 1) {
            cout << "Resultat actuel: " << result << endl;
        }
        cin >> numberOne;
        if (result == 1) {
            cin >> numberTwo;
        }
        else {
            numberTwo = 1;
        }
        if (!isDivision) {
            result *= numberOne * numberTwo;
            cout << " = " << result << endl;
        }
        else {
            if (result == 1) {
                result = numberOne / numberTwo;
            }
            else {
                result /= numberOne;
            }
            cout << " = " << result << endl;
        }
        cout << "Q: Menu principal | R: Effacement du résultat intermediaire | C: Continuer | M: Multiplier | D: Diviser" << endl;
        cin >> input;
        switch (input) {
        case RESET: 
            result = 1;
            system("cls");
            if (!isDivision) {
                cout << "Multiplication: Entrez deux nombres et je vais les multiplier." << endl;
            }
            else {
                cout << "Division: Entrez dividende et puis diviseur." << endl;
            }
            break;
        case MULTIPLY:
            isDivision = false;
            break;
        case DIVIDE:
            isDivision = true;
            break;
        default: {}
        }
    } while (input != QUIT);
    system("cls");
}

void factorialMenu() {
    char input;
    long number;
    do {
        do {
            cout << "Entrez un nombre entre 1 et 16 inclusive." << endl;
            cin >> number;
        } while (number <= 0 || number > 16);
        cout << calcFactorial(number) << endl;
        cout << "Q: Menu principal | C: Continuer avec un nouvel nombre" << endl;
        cin >> input;
        number = 0;
    } while (input != QUIT);
    system("cls");
}

void potentiationMenu() {
    char input;
    long base, exponent;
    do {
        do {
            cout << "Base and exponent please" << endl;
            cin >> base >> exponent;
        } while (base < 1 || exponent < 1);
        cout << potentiate(base, exponent) << endl;
        cout << "Q: Menu principal | C: Continuer avec des nouveaux nombres" << endl;
        cin >> input;
    } while (input != QUIT);
    system("cls");
}