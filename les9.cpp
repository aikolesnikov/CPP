#include <iostream>

using namespace std;

    union ALPHA{
        char alpha;
        int numAlpha;
    };

    struct SYMBOL{
        ALPHA a;
        enum TYPE {CHR=1, INTG};  // enum - всегда int (4 bytes)
        TYPE tp;
    };

void func()
{
    static int count=0;
    count++;
    cout << count << endl;
}

int main()
{

    return 0;
}

/*

   // auto, register, extern, static

    // auto val=5.5f;

    // register int count; // в регистровой памяти процессора

    extern int ab; // kk лежит во внешнем файле
    cout << ab << endl;

    func();
    func();
    func(); // сколько раз запускалась функция

*/


/*
    int choice;
    SYMBOL sym;

    cout << "Choose Char(1) or Integer(2):";
    cin >> choice;

    switch (choice){
        case 1:
            cin >> sym.a.alpha;
            sym.tp = SYMBOL::CHR;
            break;
        case 2:
            cin >> sym.a.numAlpha;
            sym.tp = SYMBOL::INTG;
            break;
    };

    switch (choice){
        case 1:
            cout << sym.a.alpha << endl;
            break;
        case 2:
            cout << sym.a.numAlpha << endl;
            break;
    };
*/

/*
    // ALPHA al;
    // al.alpha = 'A';

    // cout << al.alpha << endl;
    // cout << al.numAlpha << endl;

    SYMBOL sym;
    sym.a.alpha = 'T';
    sym.tp = SYMBOL::CHR;

    SYMBOL sym2;
    sym2.a.numAlpha = 33;
    sym2.tp = SYMBOL::INTG;

    cout << sym.a.alpha << endl;
    cout << sym2.a.numAlpha << endl;

    switch(sym.tp){
        case SYMBOL::CHR :
            cout << sym.a.alpha << endl;
            break;
        case SYMBOL::INTG :
            cout << sym.a.numAlpha << endl;
            break;
    }

*/



/*
    enum Color {RED, YELLOW, GREEN};
    enum {UP, DOWN, LEFT, RIGHT};
    enum {ON, OFF};
    enum Color2 {RED2, YELLOW2, GREEN2};

    Color clr;
    clr = GREEN;

    cout <<  clr << endl;
    cout << YELLOW;
*/
