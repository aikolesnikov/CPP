#include <iostream>

using namespace std;

void analiz (char s[], int a)
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
}
