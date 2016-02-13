
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
