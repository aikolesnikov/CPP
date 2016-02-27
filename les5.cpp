#include <iostream>
#include "../includes/cpp_core_1.h"
#include <iomanip>

using namespace std;

void show (int Val);
void show (char Symb);
void show (int Ar[], int ArSize);
void rect (int x=3, int y=3, char ch='*');
inline sum (int x, int y){return x+y;}

const int Cols=3;
void init_arr_2 (int Arr[][Cols], int Rows);
void show_arr_2 (int Arr[][Cols], int Rows);

int main()
{
    srand(time(0));

    int *pVal = new int;
    *pVal = 5;
    cout << *pVal << endl;
    delete pVal;

    int *pVal2 = new int (123);
    cout << *pVal2 << endl;
    delete pVal;

    int size;
    cin >> size;
    int * pArr = new int [size];

    for (int i=0; i<size; ++i){
        pArr[i]=rand()%20;
        cout << pArr[i] << " ";
    }

    delete[] pArr;

/*
//    int* pB; int *pC;  int* pAA, pBB;  int* pAAA, *pBBB;

    const int size = 10;
    int Arr [size]={1,2,3};

    cout << "Addr: " << Arr << endl;

    for (int i=0; i<size; ++i){
        cout << "i=" << i << " , adr=" << (Arr+i) << " , " << Arr[i] << " " << *(Arr+i) << endl;
    }
    int * pArr;
    pArr = Arr;

    cout << endl << pArr << " " << Arr << endl;

    cout << endl << sizeof(Arr) << " " << sizeof(pArr);

*/

/*
    int a=100;

    int * pA;
    pA = &a;

    int ** ppA;
    ppA = &pA;

    cout << a << " " << *pA << " " << **ppA << endl;

*/

/*
    const int Rows=3;
    int Arr[Rows][Cols];
    init_arr_2(Arr, Rows);
    show_arr_2(Arr, Rows);

    int Arr2[Rows][Cols];
    int SumArr = 0;
    for (int i=0; i<Rows; ++i){
            for (int j=0; j<Cols; ++j){
                SumArr+=Arr[i][j];
            }
    }
    for (int i=0; i<Rows; ++i){
        for (int j=0; j<Cols; ++j){
            Arr2[i][j]=SumArr-Arr[i][j];
        }
    }
    cout << endl;
    cout << "SumAr=" << SumArr << endl << endl;
    show_arr_2(Arr2, Rows);

*/
/*
    const int Rows=3, Cols=3;
    int Arr[Rows][Cols];

    for (int i=0; i<Rows; ++i)
            for (int j=0; j<Cols; ++j)
                Arr[i][j]=rand()%20;

    int SumArr = 0;
    int SumD1 = 0;
    int SumD2 = 0;
    for (int i=0; i<Rows; ++i){
            for (int j=0; j<Cols; ++j){
                cout << setw(5) << Arr[i][j] << " ";
                SumArr+=Arr[i][j];
            }
            SumD1+=Arr[i][i];
            SumD2+=Arr[i][Cols-i-1];
            cout << endl;
    }
    cout << "Sum=" << SumArr << endl;
    cout << "SumD1=" << SumD1 << endl;
    cout << "SumD2=" << SumD2 << endl;

*/

// cout << sum(1,2);
//    rect(); rect(5); rect(2,7); rect(3,7,'%');

/*  show (5); show('a');
    const int ArSize = 10; int Ar[ArSize]; show(Ar, ArSize); */
}


void init_arr_2 (int Arr[][Cols], int Rows){
    for (int i=0; i<Rows; ++i)
            for (int j=0; j<Cols; ++j)
                Arr[i][j]=rand()%20;
}

void show_arr_2(int Arr[][Cols], int Rows){
    for (int i=0; i<Rows; ++i){
            for (int j=0; j<Cols; ++j)
                cout << setw(5) << Arr[i][j];
        cout << endl;
    }
}


void rect (int x, int y, char ch){

    for (int i=0; i<y; ++i){
        for (int j=0; j<x; ++j)
            cout << ch;
        cout << endl;
    }
}

void show (int Val){
    cout << Val << endl;
}

void show (char Symb){
    cout << Symb << endl;
}

void show (int Ar [], int ArSize){
    for (int i=0; i<ArSize; ++i){
            cout << Ar[i] << " ";
    }
    cout << endl;

}
