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
