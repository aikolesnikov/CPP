#include <iostream>

using namespace std;

void calc (int a, int b, char op)
{
    switch (op) {
            case '+':
                (cout << "a+b=" << a+b << endl); break;
            case '-':
                (cout << "a-b=" << a-b << endl); break;
            case '*':
                (cout << "a*b=" << a*b << endl); break;
            case '/':
            {
                if (b==0)
                    cout << "Can not divide by 0." << endl;
                else
                    cout << "a/b=" << a/b << endl;
                break;
            }
            case '%':
            {
                if (b==0)
                    cout << "Can not divide by 0." << endl;
                else
                    cout << "a%b=" << a%b << endl;
                break;
            }

            default:
                cout << op << " is wrong operator." << endl;
    }

}
