#include <iostream>
#include <iomanip>

#include "../includes/cpp_core_1.h"

using namespace std;

void fillAr (double* ar, int n);
void fillAr (int* ar, int n);
void printAr (double* ar, int n);
void printAr (int* ar, int n);

int* arrayUnique(int* array, int size);

int ArSS = 0;

int main()
{

    srand(time(0));

/*
3. Написать функцию: int* arrayUnique(int* array, int size), которая будет удалять из массива дубликаты элементов,
и в конце работы вернёт новый массив с новым размером. (размер массива – глобальная переменная ).
Для решения этой задачи организовать заполнение массива случайными числами.
Результат работы программы показан ниже:
8  2  4  0  6  8  9  3  7  9  7  4  9  9  3  5  1  2  2  9
8  2  4  0  6  9  3  7  5  1
*/

    cout << "Input n:"; cin >> ArSS;

    int* pAr1 = new int[ArSS];

    fillAr (pAr1, ArSS);
    printAr(pAr1, ArSS);

    int* pAr2 = arrayUnique(pAr1, ArSS);

    printAr(pAr2, ArSS);

    delete[] pAr1;
    pAr1=0;

    delete[] pAr2;
    pAr2=0;

//-----------------------------------------------------------------------------------------------------
/*
2. Объявите указатель на массив типа int и выделите память для 12-ти элементов.
Необходимо написать функцию, которая поменяет значения четных и нечетных ячеек
массива.
Например, есть массив из 4-х элементов:   1 2 3 4 5 6
Результат :    2 1 4 3 6 5

    int arSize=12;
    int* pAr = new int[arSize];

    for (int i=0; i<arSize; ++i)
        pAr[i]=i+1;
    printAr(pAr, arSize);

    delete[] pAr;
    pAr=0;

*/

//-----------------------------------------------------------------------------------------------------
/*
1. Объявите указатель на массив типа double и предложите пользователю выбрать его размер. Далее напишите четыре блока (можно функции): первая должна выделить
память для массива, вторая  – заполнить ячейки данными, третья – показать данные на экран, четвертая – освободить занимаемую память.


    int dArrSize = 0;
    cout << "Input dArr size:";    cin >> dArrSize;

    double* dArr = new double[dArrSize];

    fillAr (dArr, dArrSize);
    printAr (dArr, dArrSize);

    delete[] dArr; // освобождаєм память
    dArr = 0; // обнуляем указатель
*/

    return 0;
}


void fillAr (double* ar, int n){
    for (int i=0; i<n; ++i){
        ar[i] = rand()%20;
    }
}

void fillAr (int* ar, int n){
    for (int i=0; i<n; ++i){
        ar[i] = rand()%20;
    }
}

void printAr (double* ar, int n){
    for (int i=0; i<n; ++i){
        cout << setw(5) << ar[i];
    }
}

void printAr (int* ar, int n){
    for (int i=0; i<n; ++i){
        cout << setw(5) << ar[i];
    }
    cout << endl;
}



int* arrayUnique(int* Ar, int ArS){

    int* pAr = new int[ArS];
    memcpy (pAr, Ar, sizeof(Ar[0])*ArS);

    int tempSize = ArS;
    for (int i=0; i<tempSize-1; ++i){
        for (int j=(i+1); j<(tempSize-1); ++j){
            if (pAr[j] == pAr[i]){
                for (int k=j; k<tempSize-1; ++k){
                    pAr[k] = pAr[k+1];
                }
                --tempSize;
            }
        }
    }
    ArSS = tempSize;


return pAr;
}



/*
4. Задан массив с количеством элементов N. Сформировать два массива: в первый включить элементы исходного массива с четными номерами, а во второй — с нечетными.
5. Написать программу, которая создает два массива ( размер задает пользователь) и склеивает(объединяет) их в один (третий) массив.
*/
