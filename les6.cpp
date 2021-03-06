#include <iostream>
#include <iomanip>
#include "../includes/cpp_core_1.h"
// #include <crtdbg.h> - доступна в Visual Studio
using namespace std;

void show (int ** Mtx, int R, int C);

void myswap (int& a, int& b){
    int t;
    t = a;
    a = b;
    b = t;
}

void myswap (int * a, int * b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int MyStrlen(const char * pStr){
    int len = 0;

    while (*pStr != '\0'){
        len++;
        pStr++;
    }

    return len;
}

int MyStrWords(const char * pStr){
    int len = 0;
    int words = 1;

    while (*pStr != '\0'){
        len++;
        pStr++;

        if (*pStr == ' ') words++;

    }

    return words;
}


int main()
{

    srand(time(0));

// строки в стиле C

/*
    char Arr[3] = {'A','B','C'};
    char str[3] = {'a','b','\0'};
    char str2[8] = "my text";
    char str3[] = "my text 2";
    cout << Arr << endl;
    cout << str << endl;
    cout << str2 << endl;
    cout << str3 << endl;
*/
    const int len = 100;
    char str[len]="";
    cout << "Enter line: ";
    cin.getline(str, len);
    cout << str << endl;
    cout << MyStrlen(str) << endl;
    cout << MyStrWords(str) << endl;

/*
// ------------------ ссылки
    // int Data = 10;
    // int& rData = Data;
    // rData +=5;
    // cout << rData;

    int a = 5, b = 7;
    myswap (a, b);
    cout << a << " " << b << endl;

//    int * pA;
//    int * pB;
//    pA = &a;
//    pB = &b;
    myswap (&a, &b);
    cout << a << " " << b << endl;

*/

    // int * Arr = new int [5];
    // int*&pArr=Arr; void function (int*& Ar, int& s);
/*
    int Data1 = 10;
    init (Data);
    void init(int& data){
        data = 20;
    }
*/

/*
// ----- n-мерные массивы -------------------

    int R, C;

    cout << "Input R and C:"; cin >> R >> C;

    int ** ppMtx = new int * [R];
    for (int i=0; i<R; ++i){
        ppMtx[i] = new int [C];
    }

    for (int i=0; i<R; ++i){
        for (int j=0; j<C; ++j)
            ppMtx[i][j] = rand()%20;
    }

    show(ppMtx, R, C);

    // ppMtx[i][j]  можно писать как    *(*(ppMtx + i)+j)

    for (int i=0; i<R; ++i){
            delete [] ppMtx[i];
    }
    delete [] ppMtx;
*/

/*
// нетипизированные указатели

    int iVal = 100;
    char iC = 'a';

    void* pV = &iVal;
    // pV = &iC;
    cout << *((char*)pV) << endl;

    char * pV2 = (char*)pV;
    cout << *(pV2++);



    // memcpy(void*, const void*, size_t);

    int size =10;
    int * pMAr = (int*)malloc(size*sizeof(int));
    free(pMAr);

*/
/*
// указатели на константу, константные указатели

    const int s = 10;
    int x = 1;
    int y = 1;

    const int * pA;
    pA = &x;
    // *pA = 2; //нельзя
    pA = &y; // можно

    int Data = 5;
    int * const pB = &Data;
    // pA = &y;  // нельзя
    *pB = 2; // можно

    const int * const pC = &Data; // менять ничего нельзя
// ---------------------------------------------
*/


    return 0;
}

void show (int ** Mtx, int R, int C){

    for (int i=0; i<R; ++i){
        for (int j=0; j<C; ++j)
            cout << setw(5) << Mtx[i][j];
        cout << endl;
    }



}



/*

    for (int i=0; i<10; ++i){

        int * pAr = new int [100000000];
        system("pause");

        delete[] pAr;

    // if (_CrtDumpMemoryLeaks()) cout << "Memory Leaks";
    }
*/

/*

    int size;
    cin >> size;
    int * pArr = new int [size];

    for (int i=0; i<size; ++i){
        pArr[i]=rand()%20;
        cout <<  setw(5) << pArr[i] << " ";
    }

    delete[] pArr;

*/
