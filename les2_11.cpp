/*
    int iVal =5;
    double dVal =2.5;
    double dRes;
    dRes = iVal * (int)dVal;
    cout << dRes << endl;
    cout << static_cast<int>(dVal) << endl;

    char cC = 'A';
    cout << (int)cC << endl; // ASCII symbol

    cout << (unsigned int) -5 << endl; // приведение всегда к unsigned

    if (5>4, 1>2) // условие выполняется справа от запятой
        cout << "true" << endl;
    else
        cout << "false" << endl;

    int id;
    cout << "Input id: ";
    cin >> id;

    if (id>=1 && id <=10)
        cout << "Testers." << endl;
    else if (id>=11 && id <=20)
            cout << "Designers." << endl;
    else if ((id>=21 && id <=30) || (id>=41 && id <=50))
            cout << "Programmers." << endl;
    else if (id>=31 && id <=40)
            cout << "Designers." << endl;
    else if(id<0 || id >50)
        cout << "No such group." << endl;

    int N5; cout << "Input N5: "; cin >> N5;

    if (N5>=1 && N5<=50){
        for (int i=1; i<=N5; ++i){
            if (i%3==0)
                cout << "$";
            else cout << "*";
        }
    } else cout << "Error." << endl;

    while ((N5/10)>0){
        cout << N5%10 << " ";
        N5 = N5/10;
    }
    cout << N5%10 << " ";


    for (int i=0; i<=254; ++i){ //++VAL - быстрее
        cout << "char " << i << ": " << (char)i << endl;
    }

*/
