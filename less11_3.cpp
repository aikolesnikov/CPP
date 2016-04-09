#include <iostream>
using namespace std;

#define MAX 100
#define square(x) x*x
#define squareAndDivide(x,y) x*x\
/y

#define square2(x) (x)*(x)


int main()
{
    int Arr[MAX];

    int x = 5;
    cout << square(5) << endl;
    cout << squareAndDivide(5,2) << endl;

    cout << "Hello MAX! " << MAX << endl;

    int a = 1;
    cout << square2(++a) << endl; // 9
    a = 1;
    cout << square2(a++) << endl; // 2

    return 0;
}
