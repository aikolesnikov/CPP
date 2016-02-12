// Вывести  20 значений функции  y = sin(x)  в диапазоне от 0 до 2π.  (sin в библиотеке  math.h )

#include <math.h>

using namespace std;

void f125()
{
    double x=0.0;
    for (int i=0;i<20;i++){
        x+=(2*M_PI/20);
        cout << "i=" << i << "; " << "x=" << x << "; " << "sin(x)=" << sin(x) << endl;
    }

    return;
}
