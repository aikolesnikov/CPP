#include <iostream>
using namespace std;

template <typename T>
T mult (T a, T b){
    return a*b;
}

template <typename T>
T compare (T a, T b){
    if (a<b) return 1;
    if (b>a) return -1;
    return 0;
}

template <typename T>   // typename и class - то же самое - template <class T>
void sort (T* arrayPtr, int length_array){

 T temp = 0; // временная переменная для хранения элемента массива
 bool exit = false; // болевая переменная для выхода из цикла, если массив отсортирован

 while (!exit) // пока массив не отсортирован
 {
  exit = true;
  for (int int_counter = 0; int_counter < (length_array - 1); int_counter++) // внутренний цикл
    //сортировка пузырьком по возрастанию - знак >
    //сортировка пузырьком по убыванию - знак <
    if (arrayPtr[int_counter] > arrayPtr[int_counter + 1]) // сравниваем два соседних элемента
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

    cout << mult<int>(3.5,5);
    // cout << mult(3.5,5);  // так не работает
    cout << endl << endl;

    int Arr[5]={5,4,3,2,1};
    for (int i=0; i<5; ++i){
        cout << Arr[i] << " ";
    }
    cout << endl;
    sort(Arr,5);
    for (int i=0; i<5; ++i){
        cout << Arr[i] << " ";
    }

    cout << endl << endl;


    cout << mult (5,2) << endl;
    cout << mult (5.1,2.0) << endl;
    cout << mult (5, (int)'a') << endl << endl;

    cout << compare(1,1);

    return 0;
}
