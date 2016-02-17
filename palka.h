#ifndef PALKA_H_INCLUDED
#define PALKA_H_INCLUDED

using namespace std;


//------------------------------------------------------------------------
void DrawFigure(int a, int b, int x, int y, char draw_char){

    // positioning to x,y
    for (int i=0; i<x; ++i)
        cout << endl;
    // for (int i=0; i<y; ++i)
    //    cout << " ";

    // drawing figure
    for (int i=0; i<b; ++i){
        for (int j=0; j<y; ++j)
            cout << " ";
        for (int j=0; j<a; ++j)
            cout << draw_char;
        cout << endl;
    }
}

//------------------------------------------------------------------------

void ClearArea(int a, int b, int x, int y, char draw_char){

    DrawFigure(a, b, x, y, draw_char);

}

//------------------------------------------------------------------------


int MoveFigure(){

    int Top=10, Left=10;  // start position
    int a=5, b=7;       // size of figure a*b

    while (Left<80){  // 80-L

        system("cls");

        // positioning to start
        for (int i=0; i<Top; ++i){
            cout << endl;
        }
        for (int i=0; i<a; ++i){
            for (int j=0; j<Left; ++j){
                cout << " ";
            }
            for (int j=0; j<b; ++j){
                cout << "*";
            }
            cout << endl;
        }
        // drawing

        Left+=1;
        Top+=1;
        Sleep(100);

    }

return 0;
}

#endif // PALKA_H_INCLUDED
