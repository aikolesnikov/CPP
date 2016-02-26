#ifndef INPL4_H_INCLUDED
#define INPL4_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print_arr(int Ar[], int ArSize){
    for (int i=0; i<ArSize; ++i){
        cout << Ar[i] << " ";
    }
    cout << endl;
}



int sum_arr(int Ar[], int ArSize){
    int sum =0;
    for (int i=0; i<ArSize; ++i){
        sum+=Ar[i];
    }

    return sum;
}

void init_arr(int Ar[], int ArSize){
    for (int i=0; i<ArSize; ++i){
        Ar[i]=rand()%20;
    }
}


//-------------------------------------------------------------

double power (double x, double y){
    double res = x;

    if (y==0)
        return 1;

    for (int i=1; i<abs(y); ++i)
        res*=x;

    return ((y>0)? res : (1/res));
}

// ------------------------------------------------------------

int char_comp(char c1, char c2){

    if (c1>c2)
        return 1;
    if (c1==c2)
        return 0;

    return -1;
}


int sum (int x, int y){

return x+y;
}

void print_fig(int n, int m, char c){

    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            cout << c;
        }
        cout << endl;
    }
    cout << endl;
}


void print_line(int n, char c){

    for (int i=0; i<n; ++i){
        cout << c;
    }
    cout << endl;
}


void menu1(int value){
    int size = 5;

    int Arr[size]={1,1,2,2,0};
    int ArrCount[size]={}; // {0}

    for (int i=0; i<size; i++){
        ArrCount[Arr[i]]++;
    }

    // 0 + rand()%41 // выводит случайное от -20 до 20 (?)
    cout << value << endl;
}

void rand_array(){

    int ArrSize = 10;
    int Arr[ArrSize];

    srand(time(0)); // ВСЕГДА В  MAIN!

    for (int i=0; i<ArrSize; ++i){
        Arr[i]=rand()%100;
    }

    cout << "Array: ";
    for (int i=0; i<ArrSize; ++i){
        cout << Arr[i] << " ";
    }
    cout << endl;

}

#endif // INPL4_H_INCLUDED
