// Write a program that prints the integers from 1 to 100.
// But for multiples of three print "Fizz" instead of the number, and for the multiples of five print "Buzz".
// For numbers which are multiples of both three and five print "FizzBuzz".

#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<=100; ++i)
    {
        if (i%3==0)
           if (i%5==0)
                cout << "FizzBuzz" << endl;
           else
                cout << "Fizz" << endl;
        else
           if (i%5==0)
                cout << "Buzz" << endl;
            else
                cout << i << endl;
    }

    cout << "\nI am the best." << endl;
    return 0;
}
