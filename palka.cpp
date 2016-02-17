#include <iostream>
#include <windows.h>
#include <conio.h>
#include "palka.h"

#define p_char '*'

using namespace std;

int main()
{
    int PWidth=7, PHight=2; // palka initial size
    int PTop=22, PLeft=35;  // palka initial position

    DrawFigure(PWidth, PHight, PTop, PLeft, p_char);

    int key=(0), counter(1);

    while (counter) {

        key = getch();
        if ((key=='w') or (key=='a') or (key=='s') or (key=='d') or (key==224)){

            switch (key){
                case 'a' :
                    --PLeft; break;
                case 'd' :
                    ++PLeft; break;
                case 'w' :
                    --PTop; break;
                case 's' :
                    ++PTop; break;
            };
            system("cls");
            DrawFigure(PWidth, PHight, PTop, PLeft, p_char);
        }
        if (key==27){
                counter=0;
        }


    }



}
