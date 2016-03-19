#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

const int size = 50;
const int nEval = 5;

struct COMP{
    char procName[size];
    double freq;
    int mem;
};

struct STUD{  // name secname arrBalov[5] averBal
    char name[size];
    char secname[size];
    int ArrV[nEval];
    double dAvV;

};

// prototypes

void init (STUD *pStud, int n);
void show (STUD *pStud, int n);

void show (COMP& cmp);
void show (COMP * pCmp);
void show (COMP *pCmp, int n);



char NameArr[10][20]={"Olya","Kolya","Vasya","Petya","Zhenya"};

int main()
{
    srand(time(0));

    int n(0);
    cout << "Input n:";
    cin >> n;


    STUD *pArr = new STUD [n];

    init(pArr, n);
    show(pArr, n);


    delete[] pArr;


/*
    COMP * pArr = new COMP [10];

    for (int i=0; i<10; ++i){
        pArr[i].mem = 500;
    }
    show(pArr[2]);
    show(pArr+2);

    delete[] pArr;

*/

/*
    COMP cmp1;
    cmp1.freq = 2.1;
    strcpy(cmp1.procName, "Intel Core");
    cmp1.mem = 8;

    cout << cmp1.procName << " " << cmp1.freq << ", " << cmp1.mem << " Gb" << endl;

    COMP cmp2;
    cin.get();
    cout << "Proc name:";
    cin.getline(cmp2.procName,size);
    cout << "Freq:";
    cin >> cmp2.freq;
    cout << "Memory:";
    cin >> cmp2.mem;

    cout << cmp2.procName << " " << cmp2.freq << ", " << cmp2.mem << " Gb" << endl;

*/
    return 0;
}

void init (STUD *pStud, int n){

    for (int i=0; i<n; ++i){
        strcpy(pStud[i].name, NameArr[rand()%5]);
        strcpy(pStud[i].secname, NameArr[rand()%5]);
        pStud[i].dAvV = 0.0;
        for (int j=0; j<nEval; ++j){
            pStud[i].ArrV[j]=rand()%5+1;
            pStud[i].dAvV+=pStud[i].ArrV[j];
        }
        pStud[i].dAvV/=nEval;
    }
};



void show(COMP& cmp){
    cout << cmp.mem << endl;
}

void show (COMP *pCmp){
    cout << (*pCmp).mem << endl;
    cout << pCmp->mem << endl;

};

void show (COMP *pCmp, int n){
    for (int i=0; i<n; ++i){
        cout << pCmp[i].mem << endl;
    }

};

void show (STUD *pStud, int n){
    for (int i=0; i<n; ++i){
        cout << pStud[i].name;
        cout << " ";
        cout << pStud[i].secname << endl;
        for (int j=0; j<nEval; ++j){
            cout << pStud[i].ArrV[j] << " ";
        }
        cout << endl;
        cout << pStud[i].dAvV << endl;
        cout << endl;
    }
};

/*
    // price 200.5, counts 4
    char str[100]={};
    cin.getline(str,100);
    char * pStr = str;

    char tempS[100]={};
    char * ptStr = tempS;

    while (!(*pStr==',')){
        *ptStr=*pStr;
        //cout << *pStr << endl;
        pStr++; ptStr++;
    }

    cout << atof(tempS) << endl;

    ++pStr;
    while (!(*pStr=='\0')){
        cout << *pStr << endl;
        pStr++;
    }
*/

/*  реверс строки
    char strPrice[100]="1234";
    int iPrice = atoi(strPrice); // atof , strtol , strtod

    char strBuf[100]={};
    sprintf(strBuf,"%d UAH",iPrice);
    cout << strBuf;

    for (int i=strlen(strBuf); i>=0; i--){
        cout << strBuf[i];
    }

*/



    /*
    char str[10]="abc";
    char str2[10];
    // cin.getline(str,100);

    cout << strlen(str) << endl;

    strcpy(str2,str);  // strcpy_s от Microsoft ( _s - безопасные функции) (уходят от C ??)
    // strncpy(str2, str, n);
    cout << strlen(str2) << endl;

    strncpy(str2, str, 2);
    cout << strlen(str2) << endl;

    strcpy(str,"MMM"); // так присваиваем строки
    cout << str << endl;

    strcat(str,".$$$");
    cout << str << endl;

    strcpy(str,"123456789"); // так присваиваем строки
    cout << str << endl;

    cout << strcmp(str,"123456789") << endl; // 0 по совпадениюб -1/1 по сравнению + регистрозависимая
    //stricmp - регистронезависимая

    // memset(Arr,0,sizeof()); обнуление массива
    */
