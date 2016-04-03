#include <iostream>
#include <stdlib.h>


using namespace std;

int Asc(const void* pL, const void* pR){
    int* pLeft = (int*)pL;
    int* pRight = (int*)pR;

    return (*pLeft - *pRight);
}

int AscD(const void* pL, const void* pR){
    double* pLeft = (double*)pL;
    double* pRight = (double*)pR;

    if ((*pLeft - *pRight)>0) return 1;
    if ((*pLeft - *pRight)<0) return -1;
    return 0;
}

int Desc(const void* pL, const void* pR){
    int* pLeft = (int*)pL;
    int* pRight = (int*)pR;

    return (*pRight - *pLeft);
}

int DescD(const void* pL, const void* pR){
    double* pLeft = (double*)pL;
    double* pRight = (double*)pR;

    if ((*pRight - *pLeft)>0) return 1;
    if ((*pRight - *pLeft)<0) return -1;
    return 0;
}

int main()
{
    int Arr [10] = {1,3,30,5};
    double ArrD[10] = {1.5, 1.1, 1.6, 7.8};

    qsort(Arr,10,sizeof(int),Asc);
    for (int i=0; i<10; ++i){
        cout << Arr[i] << " ";
    }
    cout << endl;

    qsort(Arr,10,sizeof(int),Desc);
    for (int i=0; i<10; ++i){
        cout << Arr[i] << " ";
    }
    cout << endl;

    qsort(ArrD,10,sizeof(double),AscD);
    for (int i=0; i<10; ++i){
        cout << ArrD[i] << " ";
    }
    cout << endl;
    qsort(ArrD,10,sizeof(double),DescD);
    for (int i=0; i<10; ++i){
        cout << ArrD[i] << " ";
    }
    cout << endl;


    cout << endl;
    return 0;
}
