#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

struct STUD {
    char name [50];
    int mark;
};

int main()
{
    STUD st[2] = {"Olya", 5, "Kolya", 7};

    FILE * f = fopen("c:\\CPP\\les8\\les8stud.bin", "wb");

    if (f!=NULL){
        fwrite(st, sizeof(STUD), 2, f);
        fclose(f);
        cout << "Write." << endl;
    }

    STUD buf[2];
    fopen("c:\\CPP\\les8\\les8stud.bin", "r");
    if (f!=NULL){
        fread(buf, sizeof(STUD), 2, f);
        fclose(f);
        cout << "Read" << endl;
    }

    cout << buf[0].name << endl;
    cout << buf[0].mark << endl;

    cout << buf[1].name << endl;
    cout << buf[1].mark << endl;


    STUD * pSt = NULL;
    fopen("c:\\CPP\\les8\\les8stud.bin", "rb");
    if (f!=NULL){

        fseek(f, 0, SEEK_END);
        int num = ftell(f)/sizeof(STUD);
        fseek(f, 0, SEEK_SET);

        pSt = new STUD[num];

        fread(pSt, sizeof(STUD), num, f);
        fclose(f);
        cout << "Read 2" << endl;
    }

    cout << pSt[0].name << endl;
    cout << pSt[0].mark << endl;

    delete[] pSt;
    return 0;
}


/*
    const int len = 100;
    char str[len]="qwe";
    // cout << "Enter line: ";
    // cin.getline(str, len);

    FILE * f = fopen("c:\\CPP\\les8\\les8.txt", "w");

    if (f!=NULL){
        fwrite(str, sizeof(char), strlen(str), f);
        fclose(f);
        cout << "Write." << endl;
    }

    char buf[len] = {};

    f = fopen("c:\\CPP\\les8\\les8.txt", "r");
    if (f!=NULL){
        fread(buf, sizeof(char), len-1, f);
        fclose(f);
        cout << "Read" << endl;
    }
        cout << buf << endl;

*/

/*
int factorial(int n){
    if (n>0)
        return n * factorial(n-1);
    return 1;
}

void recur(int n){
    cout << n << endl;
    if (n<5)
        recur (n + 1);
    cout << n << endl;
}

int MyStrLen (const char * pStr){
    if (*pStr != '\0')
        return 1 + MyStrLen(pStr+1);
    return 0;
}

*/

/*

    const int len = 100;
    char str[len]="";
    cout << "Enter line: ";
    cin.getline(str, len);

    cout << MyStrLen(str);
    // cout << factorial(3);
    // recur(0);

*/

/*
// выравнивание! выравнивание - по старту!
struct MYST{
    double dVal; // 16
    int iVa;     // если ставим на первое место - получаем 24
    char cVal;
};

    MYST ms;
    cout << sizeof(ms);
*/
