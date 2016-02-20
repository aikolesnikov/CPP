#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <memory.h>
#include <windows.h>
#include "inpl4.h"

using namespace std;

void swap_arr(int Ar1[], int Ar2[], int n);
void sort_arr_up(int Ar[], int size);
void sort_arr_down(int Ar[], int size);
void sort_arr_up2(int Ar[], int size);
void sort_arr_down2(int Ar[], int size);
int getTime(SYSTEMTIME st);

int main()
{
    srand(time(0));

    const int size1 = 10000;
    int Ar1[size1], Ar2[size1];
    init_arr(Ar1, size1);

    memcpy(Ar2,Ar1,sizeof(Ar1));

    SYSTEMTIME st1, st2, st3;
    GetLocalTime(&st1);
    sort_arr_up(Ar1,size1);
    GetLocalTime(&st2);
    sort_arr_up2(Ar2,size1);
    GetLocalTime(&st3);

    cout << (getTime(st2) - getTime(st1)) - (getTime(st3) - getTime(st2)) << endl;




//    cout << "Array 1     : ";
//    print_arr(Ar1,size1);

/*
    const int size1 = 10;
    int Ar1[size1];
    init_arr(Ar1, size1);

    cout << "Array 1     : ";
    print_arr(Ar1,size1);

    sort_arr_up2(Ar1, size1);
    cout << "Array 1 up  : ";
    print_arr(Ar1,size1);

    sort_arr_down2(Ar1, size1);
    cout << "Array 1 down: ";
    print_arr(Ar1,size1);

*/

/*

    const int size1 = 10;
    const int size2 = 10;

    int Ar1[size1];
    init_arr(Ar1, size1);
    cout << "Array 1 : ";
    print_arr(Ar1,size1);
    cout << sizeof(Ar1) << endl;

    int Ar2[size2];
    init_arr(Ar2, size2);
    cout << endl << "Array 2 : ";
    print_arr(Ar2,size2);

    cout << endl << "              Swap." << endl << endl;
    swap_arr(Ar1, Ar2, size1);

    cout << "Array 1 : ";
    print_arr(Ar1,size1);
    cout << endl << "Array 2 : ";
    print_arr(Ar2,size2);

*/

//    int Ar1[size1];
//    init_arr(Ar1, size1);
//    print_arr(Ar1,size1);
//    cout << "Sum arr = " << sum_arr(Ar1, size1) << endl;

//   int Ar2[size2];
 //   init_arr(Ar2, size2);
 //   print_arr(Ar2,size2);


    //double x, y;
    //cin >> x >> y;
    //cout << power (x,y) << endl;

    //char c1, c2;
    //cin >> c1 >> c2;
    //cout << char_comp(c1, c2);

    // cout << sum(10,15);

    // print_fig(5,7,'&');
    // print_fig(20,10,'#');
    // print_line(10, '*');
    // menu1(555);

    // rand_array();

    return 0;
}

void swap_arr(int Ar1[], int Ar2[], int size){
    int swap_i;
    for (int i=0; i<size; ++i){
        swap_i=Ar1[i]; // a = a+b ; b = a-b; a = a-b
        Ar1[i]=Ar2[i];
        Ar2[i]=swap_i;
    }
}
