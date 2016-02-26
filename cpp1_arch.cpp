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
