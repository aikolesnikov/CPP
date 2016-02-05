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

    cout << "Input number and finish with 0: ";
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

    cout << "MAX is " << m << endl << endl;

    return;
}

void splitN5(int N5)
{
    cout << N5%10 << " " << N5%100/10 << " " << N5%1000/100 << " " << N5%10000/1000 << " " << N5%100000/10000 << endl;
    cout << "Sum = " << (N5%10 + N5%100/10 + N5%1000/100 + N5%10000/1000 + N5%100000/10000 ) << endl << endl;

    return;
}
