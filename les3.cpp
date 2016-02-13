using namespace std;

int f31_2(){

    int x;

    cout << "Vvedite punkt (1, 2 or 3):";
    cin >> x;

    switch (x){
        case 1 :
            cout << "To do 1" << endl;
            break;
        case 2:
            cout << "To do 2" << endl;
            break;
        case 3 :
            cout << "To do 3" << endl;
            break;
        default:
            cout << "Wrong input" << endl;
            break;
    }

return 0;
}


int f31_1()
{
    cout << ((5>4)?"aaa":"bbb") << endl << endl;

    int size=6, L, R, centr;
    L = R = centr = size/2;

    for (int i=0; i<size; ++i){
        for (int j=0; j<size; ++j){
            cout << (j>=L&&j<=R?'*':' ');
        }
        cout << endl;

        (i<centr)?(L--,R++):(L++,R--);
    }

    return 0;
}
