#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int mult(int a, int b) {return a*b;};
int div(int a, int b) {return a/b;};
int sum(int a, int b) {return a+b;};

    typedef int(*FOR_MULT)(int,int);
    typedef double(*FOR_CALC)(double);

    double ctan (double x){
        return 1/tan(x);
    }

    FOR_CALC get_func(char* pStr){
        if (strcmp(pStr,"sin")==0)
            return sin;
        else if (strcmp(pStr,"cos")==0)
            return cos;
        else if (strcmp(pStr,"tan")==0)
            return cos;
        else if (strcmp(pStr,"ctan")==0)
            return ctan;
    }

int main()
{
    FOR_MULT pFunc[3]={mult, div, sum};
    for (int i=0; i<3; ++i){
        cout << pFunc[i](2,5) << endl;
    }

    char str[]="tan";
    cout << get_func(str)(0);

    // cout << "Hello 11!" << endl;
    return 0;
}
