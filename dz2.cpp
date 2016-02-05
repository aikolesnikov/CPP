#include <iostream>

using namespace std;

void analiz (string s, int a)
{
    cout << s;
    if (a>=0)
        cout << "positive ";
    else
        cout << "negative ";
    if ((a%2)==0)
        cout << "even number." << endl;
    else
        cout << "odd number." << endl;

    return;
}


int max (int a, int b, int c)
{
    int m;

    (b>=a) ? ((b>=c) ? m=b : m=c) : ((c>=a) ? m=c : m=a);

    return m;
}
