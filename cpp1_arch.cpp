/* 5-и значное число разложить на  цифры (оператор % и /) Вывести их в обратном порядке и сумму этих цифр.
 Число:     12345 Вывод:     5,    4,   3,   2,   1.   Sum = 15.
*/

using namespace std;

void f126()
{
    int N5, S;

    S=0;
    cin >> N5;

    while ((N5/10)>0){
        cout << N5%10 << " ";
        S+=N5%10;
        N5 = N5/10;
    }
    cout << N5%10 << " " << endl;

    S+=N5%10;
    cout << "S=" << S << " " << endl;


    return;
}


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


/*		
-Есть игровое поле размером 30 х 60 (по у, по х). На игровом поле два игрока (вы и противник).		
-Попросить у пользователя координаты игроков.  (Проверять на правильность вводимых координат).		
-Вывести информацию		
- в каком направлении находится от вас игрок (east, west, north, south, south-west, …),		
- какое к нему расстояние (по х и по у),		
- какое растояние между игроками (точками) ( в <cmath> есть корень  ).		
-cout << sqrt(9); // выведет 3		
-- если расстояние меньше 3, вывести сообщение («hit»), если больше 3, вывести		
-- или если больше 3, подойти к нему (поменять координаты).		
-сообщение («fire»).		
-		
-*/		
-		
-using namespace std;		
-		
-void f124()		
-{		
-    cout << "124" << endl;		
-		
-    return;		
-}



/* Y=
-x x<=-10
0 -3<=0
x^2 -10<x<=-3
x 0<5
*/

//include <cstddef>;

using namespace std;

int f123()
{
    int x, Y;

    Y=NULL;

    cin >> x;

    if (x<=-10)
        Y=-x;
    if ((x>-10) && (x<=3) )
        Y=x*x;
    if ((x>3) && (x<=0) )
        Y=0;
    if ((x>0) && (x<5) )
        Y=x;
    if (Y==NULL)
        cout << "Wrong input." << endl;

    return Y;
}


/* Программа, которая выводит информацию к какому классу работников принадлежит человек с ID ( IDвводит пользователь). Прописать защиту от ввода ID, которого нету в списке.
ID   1 - 5 и 25 - 30  --  это  designers;  ID   6 – 12 и 40  --  это moderators; ID  13 - 17  и  31 - 39  --  это testers;   ID  18 - 25   --  это programmers.
Пример:   Ввод:     ID  = 7 Вывод:   working class  is  moderators.
*/

using namespace std;

#define WC1 "designers"
#define WC2 "moderators"
#define WC3 "testers"
#define WC4 "programmers"

string f122()
{
    int id;
    string S;

    S="Wrong input";

    cin >> id;

    if ( ((id>=1) && (id<=5)) || ((id>=25) && (id<=30)) )
        S=WC1;
    if ( ((id>=6) && (id<=12)) || (id==40) )
        S=WC2;
    if ( ((id>=13) && (id<=17)) || ((id>=31) && (id<=39)) )
        S=WC3;
    if ( (id>=18) && (id<=25) )
        S=WC4;

    return S;
}



/*  121.cpp Написать усовершенствованный калькулятор со специальным подходом.
Вывод пользователю информации о возможных ошибках (три типа ошибок: деление на 0, ввод оператора %,
ввод знака $ ). Программа разбивается на три блока(секции):  ВВОД данных, ОБРАБОТКА данных
(вычисления результата или фиксирование ошибки. В этом блоке ничего не выводится на консоль), ВЫВОД
результатов ( показ в консоли результата операции или ошибки, которая была сделана). Блоки разделяются пустыми строками.
*/

using namespace std;

int a, b;
char op;
int result;

void calculator(){

bool calc_input();
int calc();
void calc_output();

    if (calc_input()) {
        result = calc();
        calc_output();
    }

return;
}

// sub - functions

bool calc_input(){
    cout << "Input a, b and operator: " << endl;
    cin >> a >> b >> op;

    if (  (b==0) && ((op=='/') || (op=='%')) ) {
        cout << "Can not divide by 0." << endl;
        return false;
        }

return true;
}

void calc_output(){
    cout << "a" << op << "b=" << result << endl;
    return;
}


int calc(){
    switch (op) {
            case '+':
                return (a+b);
            case '-':
                return (a-b);
            case '*':
                return (a*b);
            case '/':
                return (a/b);
            case '%':
                return (a%b);
            default:
                return 0;
}
}
