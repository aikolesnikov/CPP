#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

void show (int ** Mtx, int R, int C);

int main()
{

    srand(time(0));

// ----- n-мерные массивы -------------------
    int R, C;
    cout << "Input R and C:\n"; cin >> R >> C;

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


    return 0;
}

void show (int ** Mtx, int R, int C){

    for (int i=0; i<R; ++i){
        for (int j=0; j<C; ++j)
            cout << setw(5) << Mtx[i][j];
        cout << endl;
    }
}
