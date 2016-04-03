#include <iostream>

using namespace std;

int Sum(int a, int b) {return a+b;}
int Mult(int a, int b) {return a*b;}

void addOne (int& data){
    ++data;
}

void Show(int& data){
    cout << data << endl;
}

void doSomething(int* Arr, int size, void(*pFunc)(int& data)){
    for (int i=0; i<size; ++i){
        pFunc(Arr[i]);
    }
}

bool SortAsc (int& a, int& b){
    return (a>b);
}

bool SortDesc (int& a, int& b){
    return (a<b);
}


void sortArr(int* arrayPtr, int length_array, bool(*pFunc)(int& data1, int& data2)){
 int temp = 0; // временная переменная для хранения элемента массива
 bool exit = false; // болевая переменная для выхода из цикла, если массив отсортирован

 while (!exit) // пока массив не отсортирован
 {
  exit = true;
  for (int int_counter = 0; int_counter < (length_array - 1); int_counter++) // внутренний цикл
    // сортировка пузырьком по возрастанию - знак >
    // сортировка пузырьком по убыванию - знак <
    if (pFunc(arrayPtr[int_counter], arrayPtr[int_counter + 1])) // сравниваем два соседних элемента
    {
     // выполняем перестановку элементов массива
     temp = arrayPtr[int_counter];
     arrayPtr[int_counter] = arrayPtr[int_counter + 1];
     arrayPtr[int_counter + 1] = temp;
     exit = false; // на очередной итерации была произведена перестановка элементов
    }
 }
}


int main()
{
    int Arr2[10]={11,22,33,44};
    doSomething(Arr2,4,Show);
    sortArr(Arr2,10,SortDesc);
    doSomething(Arr2,4,Show);

    cout << endl << endl;

    int Arr[10]={11,22,33,44};
    doSomething(Arr,10,addOne);
    doSomething(Arr,10,Show);

    // sortArr(Arr,10,)
    cout << Sum << endl << endl;
    cout << Sum (1,2) << endl << endl;

    int (*pFunc)(int,int);
    pFunc=Sum;
    // можно так - pFunc=&Sum;
    // можно сразу    int (*pFunc)(int,int);

    cout << pFunc(2,3) << endl;

    pFunc = Mult;
    cout << pFunc(2,3) << endl;

    return 0;
}
