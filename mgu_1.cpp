#include <iostream>
#include <typeinfo>
#include <limits.h>

using namespace std;

int main()
{

    char c; short s; int i; unsigned u; signed char sc;
    float f; double d; long lng; unsigned short us; long double ld;

    // 2.12. Определить тип выражений:
    // #include <typeinfo>

    // поиграться с типами - учебник
    // bool	1	0   /   255
    // char	1	0   /   255
    // short int	2	-32 768    /    32 767
    // unsigned short int	2	0  /  65 535
    // int	4	-2 147 483 648   /   2 147 483 647
    // unsigned int	4	0     /     4 294 967 295
    // long int	4	-2 147 483 648    /    2 147 483 647
    // unsigned long int	4	0     /     4 294 967 295
    // float	4	-2 147 483 648.0  / 2 147 483 647.0
    // long float	8	-9 223 372 036 854 775 808 .0   /   9 223 372 036 854 775 807.0
    // double	8	-9 223 372 036 854 775 808 .0   /   9 223 372 036 854 775 807.0

    // cout << sizeof(bool);
    // cout << sizeof(char) << " " << CHAR_MIN << " " << CHAR_MAX << endl;

    cout << sizeof(char) << " " << CHAR_MIN << " " << CHAR_MAX << endl << "фак йее" << endl;
    cout << sizeof(signed char) << " " << SCHAR_MIN << " " << SCHAR_MAX << endl;
    cout << sizeof(unsigned char) << " " << " " << UCHAR_MAX << endl;
    cout << sizeof(short int) << " " << SHRT_MIN << " " << SHRT_MAX << endl;

    // cout << sizeof(int) << " " << INT_MIN << " " << INT_MAX;

    // cout << typeid(u).name(); // j
    // cout << typeid(sc).name(); // a
    // cout << typeid(us).name(); // t
    // cout << typeid(ld).name(); // e

    // cout << typeid(c-s/i).name() << endl; // int
    // cout << typeid(u*3-3.0*u-i).name() << endl; // d
    // cout << typeid(u-us*i).name() << endl;
    // cout << ( sc + d ) * ld << endl;
    // cout << (5 * lng - 'a' ) * ( s + u / 2 ) << endl;
    // cout << ( f + 3 ) / ( 2.5f - s * 3.14 ) << endl;


   // cout << "hello MGU"  << endl;

   return 0;
}


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
