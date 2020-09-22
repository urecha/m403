/*
* Name: Snake
* Version:    1.0
* Datum : 28.08.2020
    *
    *Entwicklungsablauf(Version, Datum, Autor, Entwicklungsschritt, Zeit) :
    *1.0
    ********************************************************************************
    *
    *Verwendungszweck : C-Schulung M403
    *
    * Beschreibung :
    * The classic game snake, more or less.
    *
    *Benötigte Libraries :
*- <iostream>
*Copyright(c) 2020 by Andrin Urech
* ******************************************************************************/

//***  Include Files ***********************************************************
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80
#define fieldSize 20

//***Funktionsdeklarationen*********************************************************

void keyboardDetection();
void gameOver();
void gameLogic();
void display();
void run();
void clearScreen();
void setConsoleColor(int color);
void resetConsoleColor();
void drawBorder();

//***Globale Variablen************************************************************

bool UP = 0,
RIGHT = 1,
LEFT = 0,
DOWN = 0;

bool running = true;

char map[fieldSize][fieldSize];

int x = fieldSize/2,
    y = fieldSize/2,
    score = 0,
    tail = 0;

/*******************************************************************************
******************************* HAUPTPROGRAMM **********************************
*******************************************************************************/

int main()
{
    for (int i = 0; i < fieldSize; i++) {
        for (int j = 0; j < fieldSize; j++) {
            map[i][j] = ' ';
        }
    }
    map[x][y] = char(219);

    system("Color F9");
    while (running) {
        run();
        Sleep(500);
    }
}

void run() {
    gameLogic();

    clearScreen();
    display();
}

void gameLogic() {
    map[x][y] = ' ';
    keyboardDetection();
    if (UP) {
        y--;
    }
    else if(DOWN){
        y++;
    }
    else if (RIGHT) {
        x++;
    }
    else if (LEFT) {
        x--;
    }
    if (map[x][y] == char(219) || x >= fieldSize || x < 0 || y < 0 || y >= fieldSize) {
        gameOver();
        return;
    }
    if (map[x][y] == char(229)) {
        score++;
        //tail++; or increaseTail();
    }
    map[x][y] = char(219);
}

void gameOver() {
    running = false;
}

void keyboardDetection() {
    if (_kbhit()) {
        char key;
        key = _getch();
        switch (key) {
        case 'w': {
            if (DOWN == 0) {
                UP = 1;
                RIGHT = 0;
                LEFT = 0;
            }
            break;
        }
        case 's': {
            if (UP == 0) {
                DOWN = 1;
                RIGHT = 0;
                LEFT = 0;
            }
            break;
        }
        case 'a':{
            if (RIGHT == 0) {
                UP = 0;
                DOWN = 0;
                LEFT = 1;
            }
            break;
        }
        case 'd': {
            if (LEFT == 0) {
                UP = 0;
                DOWN = 0;
                RIGHT = 1;
            }
            break;
        }
        default:{}
        }
    }
}

void display() {
    drawBorder();
    for (int i = 0; i < fieldSize; i++) {
        for (int j = 0; j < fieldSize; j++) {
            printf_s("%c|", map[i][j]);
        }
    }
    drawBorder();
}

void drawBorder() {
    //setConsoleColor(697);
    for (int i = 0; i < fieldSize; i++) {
        std::cout << char(219) << std::endl;
    }
    //resetConsoleColor();
}

void setConsoleColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void resetConsoleColor() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void clearScreen()
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

