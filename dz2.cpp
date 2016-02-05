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

void max2 ()
{
    int m, x;

    cin >> m;
    while (true) {
            cin >> x;
            if (x==0)
                break;
            else {
                if (x>m)
                m=x;
            };
    }

    cout << "MAX is " << m << endl;

    return;
}
