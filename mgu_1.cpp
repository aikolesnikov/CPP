#include <iostream>
#include <typeinfo>
#include <limits.h>
#include <iomanip>
#include <float.h>

#define space "   "

using namespace std;

int main()
{


   cout << "hello MGU"  << endl;

   return 0;
}


/*
#define PRINT_TYPE(x) \
if (typeid(x).name()==typeid(bool).name()) {cout << #x << " - " << "bool" << endl;} \
if (typeid(x).name()==typeid(char).name()) {cout << #x << " - " << "char" << endl;} \
if (typeid(x).name()==typeid(signed char).name()) {cout << #x << " - " << "signed char" << endl;} \
if (typeid(x).name()==typeid(unsigned char).name()) {cout << #x << " - " << "unsigned char" << endl;} \
if (typeid(x).name()==typeid(short int).name()) {cout << #x << " - " << "short int" << endl;} \
if (typeid(x).name()==typeid(unsigned short int).name()) {cout << #x << " - " << "unsigned short int" << endl;} \
if (typeid(x).name()==typeid(unsigned int).name()) {cout << #x << " - " << "unsigned int" << endl;} \
if (typeid(x).name()==typeid(int).name()) {cout << #x << " - " << "integer" << endl;} \
if (typeid(x).name()==typeid(long).name()) {cout << #x << " - " << "long" << endl;} \
if (typeid(x).name()==typeid(unsigned long).name()) {cout << #x << " - " << "unsigned long" << endl;} \
if (typeid(x).name()==typeid(long long).name()) {cout << #x << " - " << "long long" << endl;} \
if (typeid(x).name()==typeid(float).name()) {cout << #x << " - " << "float" << endl;} \
if (typeid(x).name()==typeid(double).name()) {cout << #x << " - " << "double" << endl;} \
if (typeid(x).name()==typeid(long double).name()) {cout << #x << " - " << "long double" << endl;} \
*/
// #define PRINT_TYPE(x) cout << #x << " - " << typeid(x).name() << endl;

/*
    // 2.12. Определить тип выражений:    // #include <typeinfo>

    cout << setw(20) << "bool" << space << sizeof(bool) << endl;
    cout << setw(20) << "char" << space << sizeof(char) << space << CHAR_MIN << space << CHAR_MAX << endl;
    cout << setw(20) << "signed char" << space << sizeof(signed char) << space << SCHAR_MIN << space << SCHAR_MAX << endl;
    cout << setw(20) << "unsigned char" << space << sizeof(unsigned char) << space << UCHAR_MAX << endl;
    cout << setw(20) << "short int" << space << sizeof(short int) << space << SHRT_MIN << space << SHRT_MAX << endl;
    cout << setw(20) << "unsigned short int" << space << sizeof(unsigned short int) << space << USHRT_MAX << endl;
    cout << setw(20) << "int" << space << sizeof(int) << space << INT_MIN << space << INT_MAX << endl;
    cout << setw(20) << "unsigned int" << space << sizeof(unsigned int) << space << UINT_MAX << endl;
    cout << setw(20) << "long" << space << sizeof(long) << space << LONG_MIN << space << LONG_MAX << endl;
    cout << setw(20) << "unsigned long" << space << sizeof(unsigned long) << space << ULONG_MAX << endl;
    cout << setw(20) << "long long" << space << sizeof(long long) << space << LLONG_MIN << space << LLONG_MAX << endl;
    cout << setw(20) << "unsigned long long" << space << sizeof(unsigned long long) << space << ULLONG_MAX << endl;

    int x=2000000000; cout << endl << x+x; // overflow

    cout << endl << endl;
    cout << setw(20) << "float" << space << sizeof(float) << space << FLT_MIN << space << FLT_MAX << endl ;
    cout << setw(20) << "double" << space << sizeof(double) << space << DBL_MIN << space << DBL_MAX << endl ;
    cout << setw(20) << "long double" << space << sizeof(long double) << space << LDBL_MIN << space << LDBL_MAX << endl ;
    cout << endl << endl;

    char c; short s; int i; unsigned u; signed char sc;
    float f; double d; long lng; unsigned short us; long double ld;
    // typeid(...).name();     PRINT_TYPE(long long);

    PRINT_TYPE(c-s/i); // int
    PRINT_TYPE(u*3-3.0*u-i); // double
    PRINT_TYPE(u-us*i); // unsigned int
    PRINT_TYPE((sc+d)*ld); // long double
    PRINT_TYPE((5*lng-'a')*(s+u/2)); // long
    PRINT_TYPE((f+3)/(2.5f-s*3.14)); // double
*/

/*
2.11. Написать эквивалентное выражение, не содержащее операции !

   // int a=5, b=6, c=7, d=8;

   // cout << !(a>b) << " " << (a<=b) << endl;
   // cout << !(2*a==b+4) << " " << ((2*a>b+4) || (2*a<b+4)) << endl;
   // cout << (! ( a<b && c<d )) << " " << ( a>=b || c>=d );
   // cout << !(a<2 || a>5) << " " << (a>=2 && a<=5 );
   // cout << ! ( a<1 || b<2 && c<3 ) << " " << ( a>=1 && b>=2 || c>=3 ) << endl;
*/

/*
2.9. В логике справедливы утверждения:
not (not x) = x  // только для x=1
x and true = x     // только для 1
Верны ли соответствующие утверждения для операций ! и && в Си? Ответ обосновать.

    int x = 1;
    cout << (x && true);

*/


/*
2.8. Верно ли записаны выражения? Для верно записанных выражений вычислить их значения, определить тип результата (операции  +  -  *  /  %  ++  операции отношения, операции присваивания ):
int  i,  j,  k, m;  char c, d;   i = 1;  j = 2;  k = -7; m = 0; c = 'w';

    int i, j, k, m;
    char c, d;

    i = 1;  j = 2;  k = -7; m = 0; c = 'w';

    // d = 'a' + 1 < c; // char(1)
    // m = - i - 5 * j >= k+1; // -1 - 10 >= -6 // -11>=-6 // false // 0
    // i + j++  + k = = -2*j;  // -4==-6 // false // 0
    // m = 3 < j < 5; // 1
    // m = 3 == j < 5; // 0
    // m == c = 'w'; // error
    // m = c != 87; // 1
    // m = ! c = 87; // error
    // m = !c+87; // 87
    // !m==c+87; // ok
    // m!=c+87; // ok
    // k == j - 9 == i; // 1
    // k *=3 + j; // -35

    // i + j = !k;  // error but (i + (j=!k)) is 1
    // i += ++ j + 3;  // 7 3
    // k %= m = 1 + m / 2; // 0 1
    // 1+3*m+=7/5; // error
    // k = 1 + 3 * (m+=7) / 5; // 5 7
    // c + i < c - 'x'+10; // 0
    // i - k == '0'+9 < 10; // 8 == 57<10; // 0
*/


/*

// 2.7. Верно ли записаны выражения? Для верно записанных выражений вычислить их значения ( операции  +  -  *  /    ++  - -  операции присваивания ):
int a, b, c;
a = 2;  b = 6;  c = 3;

-  -  - a		--  - a		b--  - a		a += a ++	++ b / a ++ * --c
a --- b		- a-- -b	a ++ = b	a = a ++	b++ / ++a * c --
-  --a		a-  --c		a ++ = a	++ a = b	a = ( b + 1 ) ++
*/



/*
Верно ли решена задача:
«значение целочисленной переменной с увеличить на 1;
целочисленной переменной а присвоить значение, равное удвоенному значению переменной с ». = 12
*/

/*
2.5. Верно ли решена задача: «значение целочисленной переменной с уменьшить на 1;
целочисленной переменной а присвоить значение, равное частному от деления переменной с на 2».
= 2
*/

/*
int a, c;  c = 5;

// --c; a = c/2;
// a = --c / 2;
// c -=1; a = c%2;  // 0
// a = c -- / 2;
// a = c -= 1/2; // 5
//a = (c = c -1)/2;
// a = (c -=1)/2;
// a = (c-=1)/2.0;

*/

/*
int a, c;  c = 5;
// c ++ ; a = 2 * c; // 12
// a = 2*c++; // 10
// c += 1; a = c + c; // 12
// a = c+++c; // 11
// a = c + (++c); // 12
// ++c; a = c+c; // 12
// a = ++c + c; // 12
// a = c+=1 + c; // 11
a = (c+=1) + c; // 12
*/


/*

int a, b, c, d, e;
a = 2;  b = 13;  c = 7;  d = 19;  e = -4;

cout << b / a / c << endl;
cout << d / a % c << endl;
cout << c % d-e << endl;
cout << -e % a + b / a *-5+5 << endl; // -25
cout << b % e << endl; // 1
cout << 7-d%+(3-a) << endl; // 7
cout << b % - e * c << endl; //  (b % -e) * c = 7
cout << 9 / c - - 20 / d << endl; // (9 / c) - (-20 / d) = 1 - (-1) = 2

*/


/*
    double b = 1.71;
    b = 1E-6 * 1000000;
    b = 0.314159E1F;
    b = .005;
    b = 0010000E-04;
    b = 5.E+2;
    b = 0e0;
    // b = 0x1A1.5;
    // b = 08.5;
    b = 0;
    b = 0X1E6;
    // b = 0F;
    b = 1234.56789L;
    b = 10000000000.0E-10D;
    // b = 3.1415U;
    b = 1e-2f;
    b = -12.3E-6;
    b = +10e6;
    // b = E-6;
*/


/*
   int a=123;
   a=1E6;
   a = 123456789LU;
   a = -5;
    a = 0X20UL;
    a = '0';
    a = 011;
    // a = ‘\x7’;
    // a = 0X-1AD;
    // a = ‘\122’;
    a = 0010;
    a = 0xffL;
    // a = 01A;
    // a = -‘x’;
    // a = "x";
    // a = 'a'U;
    a = 010UL;
    a = '\n';
    a = +0x1af;
    a = 0X0;
*/
