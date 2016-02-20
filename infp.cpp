#include <iostream>
#include <windows.h>

using namespace std;

int getTime(SYSTEMTIME st){

return (st.wHour*3600 + st.wMinute*60 + st.wSecond)*1000 + st.wMilliseconds ;

}



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
