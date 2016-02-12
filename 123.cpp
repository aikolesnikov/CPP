/* Y=
-x x<=-10
0 -3<=0
x^2 -10<x<=-3
x 0<5

*/

//include <cstddef>;

using namespace std;

int f123()
{
    int x, Y;

    Y=NULL;

    cin >> x;

    if (x<=-10)
        Y=-x;
    if ((x>-10) && (x<=3) )
        Y=x*x;
    if ((x>3) && (x<=0) )
        Y=0;
    if ((x>0) && (x<5) )
        Y=x;
    if (Y==NULL)
        cout << "Wrong input." << endl;

    return Y;
}
