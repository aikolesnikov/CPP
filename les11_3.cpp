#include <iostream>
#include <stdio.h>

using namespace std;

int fSum (int term, ...){
    int* pData = &term;
    pData++;
    int sum = 0;
    while (*pData!=term){
        sum += *pData;
        pData++;
    }
    return sum;
}

int fSum2 (int n, ...){
    int * pData = &n;
    int sum = 0;
    for (int i=1; i<=n; ++i){
        sum += pData[i];
    }
    return sum;
}

short fSum3 (short term, ...){
    short * pData = &term;
    pData+=2;
    short sum = 0;
    while (*pData!=term){
        sum += *pData;
        pData+=2;
    }
    return sum;
}

int main(int argc, char** argv)
{
    if (argc>0){
        for (int i=0; i<argc; ++i)
            cout << argv[i] << endl << endl;
    }

    printf("text=%d",5);
    //print("prc=")

    cout << endl << fSum(0,1,2,3,0) << endl;
    // cout << endl << fSum2(4,1,2,3,0) << endl;
    // cout << endl << fSum3(0,short(1),short(2),short(3),short(0)) << endl;


    return 0;
}
