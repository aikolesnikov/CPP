#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include "palka.h"

#define p_char '='
#define b_char '*'
#define MTOP DrawFigure(PWidth, PHight, Px, Py, ' '); DrawFigure(PWidth, PHight, Px, Py-=Pstep, p_char); break;
#define MDOWN DrawFigure(PWidth, PHight, Px, Py, ' '); DrawFigure(PWidth, PHight, Px, Py+=Pstep, p_char); break;
#define MLEFT DrawFigure(PWidth, PHight, Px, Py, ' '); DrawFigure(PWidth, PHight, Px-=Pstep, Py, p_char); break;
#define MRIGHT DrawFigure(PWidth, PHight, Px, Py, ' '); DrawFigure(PWidth, PHight, Px+=Pstep, Py, p_char); break;

using namespace std;

int getTime(SYSTEMTIME st){
	return (st.wHour*3600 + st.wMinute*60 + st.wSecond)*1000 + st.wMilliseconds;
	}

int main(){

    int PWidth=5, PHight=1; // palka initial size
    int Px=22, Py=35;  // palka initial position
    int BWidth=2, BHight=2; // ball initial size
    int Bx=22, By=22;  // ball initial position

    DrawFigure(PWidth, PHight, Px, Py, p_char);
    int Bstep=1; int Pstep=1;

    while (true) {
            while ( !_kbhit() ) {
                    if ((Bx==1) || (Bx==79))
                        Bstep=-Bstep;
                    DrawFigure(BWidth, BHight, Bx, By, ' ');
                    DrawFigure(BWidth, BHight, Bx+=Bstep, By, b_char);
                    Sleep(100);
                }
            int key_code = _getch();
            if (key_code==27)
                break;
            else {
                switch (key_code){
                    case 'w': MTOP      // w 119
                    case 'a': MLEFT     // a 97
                    case 's': MDOWN     // s 115
                    case 'd': MRIGHT    // d 100
                    case 224:
                        key_code = _getch();
                        if ( key_code == 72) {MTOP}
                        if ( key_code == 80) {MDOWN}
                        if ( key_code == 75) {MLEFT}
                        if ( key_code == 77) {MRIGHT}
                        // break;
                }
            }
    }


// ---------------------------------------------------------------
/*
    SYSTEMTIME currtime, prevtime;
    while (true) {
            GetLocalTime(&prevtime);
            while ( !_kbhit() ) {
                GetLocalTime(&currtime);
                if ( (getTime(currtime) - getTime(prevtime)) > 100 ){
                    DrawFigure(PWidth, PHight, Px, Py, ' ');
                    DrawFigure(PWidth, PHight, --Px, Py, p_char);
                    break;
                }
            }
    }
*/

// ---------------------------------------------------------------
//            while(_kbhit()) _getch();

/*
    int condition(1);
    while( !(_kbhit()) and (condition) )  {
        int key_code = _getch();
            switch (key_code){
                case 'w': MTOP      // w 119
                case 'a': MLEFT     // a 97
                case 's': MDOWN     // s 115
                case 'd': MRIGHT    // d 100
                case 224:
                    key_code = _getch();
                    if ( key_code == 72) {MTOP}
                    if ( key_code == 80) {MDOWN}
                    if ( key_code == 75) {MLEFT}
                    if ( key_code == 77) {MRIGHT}
                    break;

                case 27: condition = 0;
            }
    }

*/

}
