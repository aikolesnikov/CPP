#ifndef CPP_CORE_1_INCLUDED
#define CPP_CORE_1_INCLUDED

#include <windows.h>
#include <conio.h>
#include <time.h>

using namespace std;

void gotoxy(int x, int y);
void DrawFigure(int width, int hight, int x, int y, char draw_char);
int getTime(SYSTEMTIME st);
int char_comp(char c1, char c2);
double power (double x, double y);

void init_arr(int Ar[], int ArSize);
void print_arr(int Ar[], int ArSize);
int sum_arr(int Ar[], int ArSize);

void sort_arr_up(int Arr[], int arr_size);
void sort_arr_down(int Arr[], int arr_size);
void sort_arr_up2(int Arr[], int arr_size);
void sort_arr_down2(int Arr[], int arr_size);

void InverseTwoArrays(int Ar1[], int Ar2[], int ArSize);

void dz3_3(); /* Заполнить массив следующим образом:  1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,5,6,6,6… . Показать на консоль. */
void dz3_2();
/* 2. Найти в массиве Mах и  Min число. Вывести все числа, которые находятся между ними, так как в примере ( с отступом).
Пример:
3,  4, 5, 1, 7, 9, 6, 8, 4, 6, 9, 15,  13, 8, 5
             1, 7, 9, 6, 8, 4, 6, 9, 15 */


//-----------------------------------------------------------------------------------------
void InverseTwoArrays(int Ar1[], int Ar2[], int ArSize){
    for (int i=0; i<ArSize; ++i){
        int tmp = Ar2[ArSize-1-i];
        Ar2[ArSize-1-i]=Ar1[i];
        Ar1[i]=tmp;
    }
}
//-----------------------------------------------------------------------------------------
void sort_arr_down2(int Arr[], int arr_size){

    int tmp;

    for (int i=0; i<arr_size-1; ++i){
        for (int j=0; j<arr_size-1-i; ++j){
            if (Arr[j]<Arr[j+1]){
                tmp = Arr [j];
                Arr [j] = Arr [j+1];
                Arr [j+1] = tmp;
            }
        }
    }
}

//-----------------------------------------------------------------------------------------
void sort_arr_up2(int Arr[], int arr_size){

    int tmp;

    for (int i=0; i<arr_size-1; ++i){
        for (int j=0; j<arr_size-1-i; ++j){
            if (Arr[j]>Arr[j+1]){
                tmp = Arr [j];
                Arr [j] = Arr [j+1];
                Arr [j+1] = tmp;
            }
        }
    }
}

//-----------------------------------------------------------------------------------------
void sort_arr_down(int Arr[], int arr_size){

    int tmp;

    for (int i=0; i<arr_size-1; ++i){
        for (int j=0; j<arr_size-1; ++j){
            if (Arr[j]<Arr[j+1]){
                tmp = Arr [j];
                Arr [j] = Arr [j+1];
                Arr [j+1] = tmp;
            }
        }
    }
}

//-----------------------------------------------------------------------------------------
void sort_arr_up(int Arr[], int arr_size){

    int tmp;

    for (int i=0; i<arr_size-1; ++i){
        for (int j=0; j<arr_size-1; ++j){
            if (Arr[j]>Arr[j+1]){
                tmp = Arr [j];
                Arr [j] = Arr [j+1];
                Arr [j+1] = tmp;
            }
        }
    }
}

//-------------------------------------------------------------
void print_arr(int Ar[], int ArSize){
    for (int i=0; i<ArSize; ++i){
        cout << Ar[i] << " ";
    }
    cout << endl;
}

//-------------------------------------------------------------
int sum_arr(int Ar[], int ArSize){
    int sum =0;
    for (int i=0; i<ArSize; ++i){
        sum+=Ar[i];
    }

    return sum;
}

//-------------------------------------------------------------
void init_arr(int Ar[], int ArSize){
    for (int i=0; i<ArSize; ++i){
        Ar[i]=rand()%20;
    }
}
/*
void init_arr(int Ar[], int Rows, int Cols){
    for (int i=0; i<Rows; ++i)
        for (int j=0; j<Cols; ++j)
            Ar[i][j]=rand()%20;
}
*/
//------- x power y -------------------------------------------------
double power (double x, double y){
    double res = x;

    if (y==0)
        return 1;

    for (int i=1; i<abs(y); ++i)
        res*=x;

    return ((y>0)? res : (1/res));
}

// ---------- compare 2 chars --------------------------------------------
int char_comp(char c1, char c2){

    if (c1>c2)
        return 1;
    if (c1==c2)
        return 0;

    return -1;
}

//-------- get current time in msec --------
int getTime(SYSTEMTIME st){
return (st.wHour*3600 + st.wMinute*60 + st.wSecond)*1000 + st.wMilliseconds ;
}

//-------- set cursor to the position x,y --------
void gotoxy(int x, int y){

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//-------- draw figure width*hight at the position x,y  -----------------------------
void DrawFigure(int width, int hight, int x, int y, char draw_char){

    for (int i=0; i<hight; ++i){
            gotoxy(x,y+i);
        for (int j=0; j<width; ++j)
                cout << draw_char;
    }
}


// ------------------------------------------------------------------------------------------------------------------------
void dz3_2(){
/* 2. Найти в массиве Mах и  Min число. Вывести все числа, которые находятся между ними, так как в примере ( с отступом).
Пример:
3,  4, 5, 1, 7, 9, 6, 8, 4, 6, 9, 15,  13, 8, 5
             1, 7, 9, 6, 8, 4, 6, 9, 15 */

    cout << endl << "dz3_2" << endl;

    srand(time(0));
    int ArrSize = rand()%100;
    if (ArrSize==0) ArrSize=1;
    cout << "Array size: " << ArrSize << endl;

    int Arr[ArrSize];

    for (int i=0; i<ArrSize; ++i){
        srand(time(0)+100000+i*i*i*i);
        Arr[i]=rand()%100;
    }

    cout << "Array: ";
    for (int i=0; i<ArrSize; ++i){
        cout << Arr[i] << " ";
    }
    cout << endl;

    int Min=Arr[0], Max=Arr[0];
    int MinPos=0, MaxPos=0;
    for (int i=1; i<ArrSize; ++i){
        if (Arr[i]<Min){
            Min=Arr[i]; MinPos=i;
            }
        else if (Arr[i]>Max){
                Max=Arr[i]; MaxPos=i;
        }
    }
    cout << "Min=" << Min << "; Max=" << Max << endl;

    cout << "Array: ";
    if (MinPos<=MaxPos){
        for (int i=0; i<MinPos; ++i)
            cout << "  " << " ";
        for (int i=MinPos; i<=MaxPos; ++i)
            cout << Arr[i] << " ";
    }
    else {
        for (int i=0; i<MaxPos; ++i)
            cout << "  " << " ";
        for (int i=MaxPos; i<=MinPos; ++i){
            cout << Arr[i] << " ";
        }
    }
}

// ------------------------------------------------------------------------------------------------------------------------
void dz3_3(){ /* Заполнить массив следующим образом:  1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,5,6,6,6… . Показать на консоль. */

    cout << endl << "dz3_3" << endl;

    srand(time(0));
    int Num = rand()%10;
    if (Num==0) Num=1;
    cout << "Border is " << Num << endl;

    int ArrSize=0;
    for (int i=1; i<=Num; ++i){
        for (int j=1; j<=i; ++j){
            ArrSize++;
        }
    }
    cout << "ArrSize=" << ArrSize << endl;
    int Arr[ArrSize];

    int ArrElem=0;
    for (int i=1; i<=Num; ++i){
        for (int j=1; j<=i; ++j){
            Arr[ArrElem++]=i;
        }
    }

    cout << "Aray: ";
    for (int i=0; i<ArrSize; ++i){
        cout << Arr[i];
    }

}
#endif // CPP_CORE_1_INCLUDED
