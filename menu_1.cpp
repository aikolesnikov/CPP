#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

#define MTOP if (MenuIndex==1) {MenuIndex=3;} else {MenuIndex-=1;};
#define MDOWN if (MenuIndex==3) {MenuIndex=1;} else {MenuIndex+=1;};
#define MLEFT
#define MRIGHT

enum ConsoleColor {
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

void PrintMenu (int MenuIndex);

int main() {

   int MenuIndex = 1;
   int esc_condition = 0, key_code;

   PrintMenu(MenuIndex);

   while( !(_kbhit()) and !(esc_condition) )  {

        key_code = _getch();
        switch (key_code){
            case 'w': MTOP      // w 119
            case 'a': MLEFT     // a 97
            case 's': MDOWN     // s 115
            case 'd': MRIGHT    // d 100
            case 224:
                key_code = _getch();
                if ( key_code == 72) {MTOP}
                if ( key_code == 80) {MDOWN}
                if ( key_code == 75) {MLEFT}
                if ( key_code == 77) {MRIGHT}
                break;
            case 13 :
                system("cls");
                cout << "You have chosen " << "Menu" << MenuIndex << endl;
                system("pause");
                break;
            case 27: esc_condition = 1;
        }
        PrintMenu(MenuIndex);
   }

   return 0;
}

void PrintMenu (int MenuIndex){
    /*Получение дескриптора*/
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // /*Цвет всего фона - белый. Цвет всего текста - черный*/
    // system("color F0");
    // puts("Hello World!");

    system("cls");

    for (int j=1; j<=3; ++j){
        if (j==MenuIndex) {
            SetConsoleTextAttribute(hConsole, (WORD) ((LightGray << 4) | Cyan));
        }
        else {
            SetConsoleTextAttribute(hConsole, (WORD) ((Black<< 4) | White));
        }
        cout << "Menu" << j << endl;
    }

    SetConsoleTextAttribute(hConsole, (WORD) ((Black<< 4) | DarkGray)); // setting back standard colors
    cout << endl << endl << endl << "Use arrows for navigation, Enter for activation and Esc for exit.";
    SetConsoleTextAttribute(hConsole, (WORD) ((Black<< 4) | White)); // setting back standard colors
}
