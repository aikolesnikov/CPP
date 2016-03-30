#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
#define MTOP cout << "top" << endl; break;
#define MDOWN cout << "down" << endl; break;
#define MLEFT cout << "left" << endl; break;
#define MRIGHT cout << "right" << endl; break;

   int condition = 1, key_code;

   while( !(_kbhit()) and (condition) )  {

        key_code = _getch();
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
}
