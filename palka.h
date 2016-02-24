#ifndef PALKA_H_INCLUDED
#define PALKA_H_INCLUDED

using namespace std;

void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//------------------------------------------------------------------------
void DrawFigure(int width, int hight, int x, int y, char draw_char){

    for (int i=0; i<hight; ++i){
            gotoxy(x,y+i);
        for (int j=0; j<width; ++j)
                cout << draw_char;
    }
}

#endif // PALKA_H_INCLUDED
