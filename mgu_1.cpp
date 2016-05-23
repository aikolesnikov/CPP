#include <iostream>
#include <typeinfo>
#include <limits.h>
#include <iomanip>
#include <float.h>
#include <stdio.h>

#define space "   "

using namespace std;

int main()
{
    cout << "hello MGU"  << endl;

    return 0;
}

/*
// 2.22. Дано вещественное число x . Не пользуясь никакими операциями, кроме умножения, получить (степени)
// a) x 21 за шесть операций
int x1, x2, x3, x4, x5;
x1=2;

x2=x1*x1; // 2
cout << "x^2 " << x2 << endl;
x3=x2*x2; // 4
cout << "x^4 " << x3 << endl;
x4=x3*x3; // 8
cout << "x^8 " << x4 << endl;
x4=x4*x4; // 16
cout << "x^16 " << x4 << endl;
x4=x4*x3*x1; // 21
cout << "x^21 " << x4 << endl;

// b) x 3 и x 10 за четыре операции  ???
x2=x1*x1; // 2
x3=x2*x1; // 3
x4=x2*x3; // 5
x4=x4*x4; // 10

// c) x 5 и x 13 за пять операций
x2=x1*x1; // 2
x3=x2*x1; // 3
x4=x2*x3; // 5
x4=x4*x4; // 10
x4=x4*x3; //13

// d) x 2 , x 5 и x 17 за шесть операций
x2=x1*x1; // 2
x3=x2*x1; // 3
x4=x2*x3; // 5
x5=x4*x4; // 10
x5=x5*x4*x2; //17

// e) x 4 , x 12 и x 28 за шесть операций
x2=x1*x1; // 2
x3=x2*x2; // 4
x4=x3*x3; // 8
x5=x4*x4; // 16
x4=x5*x4*x3; // 28
*/

/*
// 2.20. Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа.

    int k=123;
    cout << k%10*100 + k%100/10*10 + k%1000/100 << endl;

// 2.21. Идет n-ая секунда суток. Определить, сколько полных часов и полных минут прошло к этому моменту.

    int s=3725;
    cout << s << " seconds: " << s/3600 << " hours; " << (s-s/600*600)/60 << " minutes; " << (s-s/600*600)%60 << " seconds;"<< endl;
*/


/*
// 2.18. Целой переменной k присвоить значение, равное сумме цифр в записи целого положительного трехзначного числа x.
    int k=567;
    cout << k%10 + k%100/10 + k%1000/100 << endl;

// 2.19. Целой переменной k присвоить значение, равное первой цифре дробной части в записи вещественного положительного числа x.
    double x = 11.789;
    int kk;

    kk = x*10;
    kk %=10;
    cout << x << endl;
    cout << kk << endl;
*/


/*
2.17. Целой переменной k присвоить значение, равное третьей от конца цифре в записи целого положительного числа x.

    unsigned int k, x=3454721;

    k = (x%1000-x%100)/100;
    cout << k << endl;

*/


/*
2.16. Дано вещественное число x . Не пользуясь никакими операциями, кроме умножения, сложения и вычитания, вычислить
2x4-3x3+4x2-5x+6 (степени).
Разрешается использовать не более четырех умножений и четырех сложений и вычитаний.


   double x=2;
   cout << (((((2*x)-3)*x)+4)*x-5)*x+6; // 20
*/

/*
// 2.15. Что будет напечатано в результате выполнения следующего фрагмента программы?
double d = 3.2, x; int i = 2, y;
x = ( y = d / i ) * 2; printf ("x = %f ;y = %d\n", x, y);
y = d * ( x = 2.5 / d); printf ("x = %f; y = %d\n", x, y);
x = d * (y = ((int)2.9 + 1.1)/d); printf ("x = %d y = %f\n", x, y);
*/


/*
    //2.14. Что будет напечатано в результате выполнения следующего фрагмента программы?
	double d; float f; long lng; int i; short s;
    // d = 100/3.0; printf("d = %.30f\n",d);

	s = i = lng = f = d = 100/3;
	d = f = lng = i = s =100/3;
	s = i = lng = f = d = 1000000/3;
	d = f = lng = i = s =1000000/3;
	lng = s = f = i = d =100/3;
	f = s = d = lng = i = (double)100/3;
	s = i = lng = f = d = 100/(double)3;
	f = s = d = lng = i = (double)100/3;
	i = s = lng = d = f = (double)(100/3);

	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
*/


/*
// 2.13. Допустимо ли в Си? Если "да" - опишите семантику этих действий; если "нет" - объясните почему.
int  i;
i = (1 || 2) % (1 | 2 );
printf ( "i = %d\n", i);


int  a, b, m, n, z;
m = n = 5;
z = a = b = 0;
z--, ( a = b ) = z + ( m != n );
printf ("%d %d %d %d %d\n", a, b, m, n, z);


int  i = 1;
i = i << i | i;
printf ( "i = %d\n", i);


double  x = 1.9; int a;
double  b = 3.7;
a = b += (1 && 2 || 3) != (int)x;
printf ("%f %d %f\n", x, a, b);


int x;
x = 5; ++ x =10;
printf ("%d\n", x);


int i, x, y;  x = 5; y = 10; i = 15;
x = ( y = 0, i = 1);
printf("%d %d %d\n", i, x ,y);
( x = y == 0) , i=1;
printf("%d %d %d\n", i, x, y);


int x, y;
x = 5; y = x && ++ x;
printf("%d %d\n", x, y);


int x = 2, y, z;
x *= 3+2; x *= y = z = 4;
printf ("%d %d %d\n", x, y, z);
x = y == z; x == ( y = z );
printf ("%d %d %d\n", x, y, z);


int x = 2, y = 1, z = 0;
y = x && y || z;
z = x / ++x;
printf(" %d %d %d\n", x, y, z);


int x = 03, y = 02, z = 01;
printf("%d\n", x | y & -z);
printf("%d\n", x ^ y & -z);
printf("%d\n", x & y && z);
printf("%d\n", x<<3);


int x, y, z;  x = y = z = 1;
x += y += z;
printf("%d\n", x < y ? y++ : x++);
printf("%d\n", z+=x<y ? ++x : y--);
printf("%d %d %d\n", x, y, z);
printf("%d\n", z>=y && y>=x);


int x, y, z, i;  x = y = z = 1;
i = ++x || ++y && ++z;
printf("%d%d%d%d\n", x,y,z,i);
i = x++ <= --y || ++z >= i;
printf("%d%d%d%d\n", x,y,z,i);

*/


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
