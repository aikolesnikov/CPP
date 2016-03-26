#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    DWORD disc = GetLogicalDrives();   // DWORD - аналог unsigned long

    cout << disc << endl;

    unsigned int mask = 1;
    mask = (1<<((sizeof(int))*8-1));
    for (int i=0; i<(sizeof(int))*8; ++i){
        if ((disc & (mask>>i)) == (mask>>i))
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;


    return 0;
}


/*
    int a = 5;
    cout << a << endl;
    a = ~a;
    cout << a << endl;
    a = ~a;
    cout << a << endl;

    cout << "-----------" << endl;

    a <<= 3;  // эквивалентно a умножить на 2 в степени n
    cout << a << endl;
    a >>= 2;  // эквивалентно a разделить на 2 в степени n
    cout << a << endl;

    a = 5;
    int b = 3;
    cout << (a & b) << endl;

    int PORT = 15;
    int n = 2; // выключаем 2-ую лампочку
    PORT = PORT & (~(1<<n)); // выключаем n-ую лампочку

    int t1 = 5;
    unsigned int mask = 1; // проверяем установлен ли 1-й бит в 1. Включена ли 1-ая лампочка.
    if ((a & mask) == mask)
        cout << "yes";
    else
        cout << "no";

    cout << endl << endl;

    int x;
    cin >> x;

    // раскладывем тип на биты
    mask = (1<<((sizeof(int))*8-1));
    for (int i=0; i<(sizeof(int))*8; ++i){
        if ((x & (mask>>i)) == (mask>>i))
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
*/

