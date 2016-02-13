#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int Arrplay(){

    const int ArrN=4;
    int Arr[ArrN];
//-------------------------------------------------
    srand(time(0));
    for (int i=0; i<ArrN; ++i){
        Arr[i]=rand()%100;
    }
    for (int i=0; i<ArrN; ++i){
        cout << Arr[i] << endl;
    }
    cout << endl;
    for (int i=ArrN-1; i>=0; i--){
        cout << Arr[i] << endl;
    }
//-------------------------------------------------
    int iSArr=0;
    for (int i=0; i<ArrN; ++i){
        iSArr+=Arr[i];
    }
    cout << endl << "Sum=" << iSArr << endl << endl;
//-------------------------------------------------
    int x, pos, nx=0;
    cout << "Input x:";
    cin >> x;
    for (int i=0; i<ArrN; ++i){
        if (Arr[i]==x){
            cout << "Position " << i+1 << endl;
            nx+=1;
        }
    }
    cout << x << " found " << nx << " times";
//------------------------------------------------

return 0;
}

int Klava(){

    int key(0);

    do {
        key = _getch();
        switch (key){
            case 224 :
                //if ((_getch())== 72)  // 72 вверх 80 вниз 75 влево 77
                    cout << "a";
                break;
        };
    } while (key!=27);

return 0;
}

int GetASCII(){

    int Num(0);
    do {
        Num = _getch();
        cout << Num << endl;
    } while (Num!=27);
}

int MoveFigure(){

    int Top, Left;
    int a,b;

    cin >> Top >> Left;
    cin >> a >> b;

    int L=Left;
    while (Left<25){  // 80-L

        system("cls");

    // drawing
        for (int i=0; i<Top; ++i){
            cout << endl;
        }
        for (int i=0; i<a; ++i){
            for (int j=0; j<Left; ++j){
                cout << " ";
            }
            for (int j=0; j<b; ++j){
                cout << "*";
            }
            cout << endl;
        }
    // drawing

        Left+=1;
        Top+=1;
        Sleep(0.0001);

        }

return 0;
}


int rand09(){

    srand(time(0));
    int Num = rand()%10, x;

    cout << Num << endl;

    do {
            cin >> x;
        } while (x!=Num);

    cout << "Yes." << endl;

return 0;
}

int f31_2(){

    int x;

    cout << "Vvedite punkt (1, 2 or 3):";
    cin >> x;

    switch (x){
        case 1 :
            cout << "To do 1" << endl;
            break;
        case 2:
            cout << "To do 2" << endl;
            break;
        case 3 :
            cout << "To do 3" << endl;
            break;
        default:
            cout << "Wrong input" << endl;
            break;
    }

return 0;
}


int f31_1()
{
    cout << ((5>4)?"aaa":"bbb") << endl << endl;

    int size=6, L, R, centr;
    L = R = centr = size/2;

    for (int i=0; i<size; ++i){
        for (int j=0; j<size; ++j){
            cout << (j>=L&&j<=R?'*':' ');
        }
        cout << endl;

        (i<centr)?(L--,R++):(L++,R--);
    }

    return 0;
}
