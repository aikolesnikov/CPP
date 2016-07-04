#include <iostream>
#include <typeinfo>
#include <limits.h>
#include <iomanip>
#include <float.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <cstdlib>

#define space "  "
#define start cout << "\n----------------------------\n";

using namespace std;

int main()
{

    //3.3 Обработка символьных данных
    //Замечание: при решении некоторых задач этого раздела необходимы минимальные знания о «стандартном» вводе и выводе литер.
    // 3.48. Пусть во входном потоке находится последовательность литер, заканчивающаяся точкой (кодировка ASCII):
    {
         // a) определить, сколько раз в этой последовательности встречается символ ‘a’;
        char *str, c;
        const int sN = 10;

        int a_qty=0;
        str = (char *) malloc (sizeof(*str) * sN);
        if (str){
            int ci = 0;
            while (    ((str[ci++]=getchar())!='\n')  )
            {
                if (str[ci-1]=='a')
                    ++a_qty;
                if (ci==sN-1)
                    break;
            }
            str[ci]='\0';

            cout << str << endl << "lenght=" << ci-1 << endl << "a - " << a_qty;

            free(str);
        }
            else printf("no memory.\n");
    }


    cout << "\n----------------------------\nhello MGU"  << endl;

    return 0;
}

/*
b) определить, сколько символов ‘e’ предшествует первому вхождению символа ‘u’ ( либо сколько всего символов ‘e’ в этой последовательности, если она не содержит символа ‘u’ );
c) выяснить, есть ли в данной последовательности хотя бы одна пара символов-соседей ‘n’ и ‘o’, т.е. образующих сочетание ‘n’ ‘o’ либо ‘o’ ‘n’;
d) выяснить, чередуются ли в данной последовательности символы ‘+’ и ‘-‘, и сколько раз каждый из этих символов входит в эту последовательность;
e) выяснить, сколько раз в данную последовательность входит группа подряд идущих символов, образующих слово С++;
f) выяснить, есть ли среди символов этой последовательности символы, образующие слово char;
g) выяснить, есть ли в данной последовательности фрагмент из подряд идущих литер, образующий начало латинского алфавита (строчные буквы), и какова его длина. Если таких фрагментов несколько, найти длину наибольшего из них. Если такого фрагмента нет, то считать длину равной нулю;
h) выяснить, есть ли в данной последовательности фрагменты из подряд идущих цифр, изображающие целые числа без знака. Найти значение наиболь-шего из этих чисел. Если в этой последовательности нет ни одной цифры, то считать, что это значение равно нулю;
i) определить, имеет ли данная последовательность символов структу-ру, которая может быть описана с помощью следующих правил:
последовательность ::= слагаемое + последовательность | слагаемое 14
слагаемое ::= идентификатор | целое
идентификатор ::= буква | идентификатор буква | идентификатор цифра
буква ::= A | B | C | D | E | F | G | H | I | J | K
цифра ::= 0 | 1 | 2 | 3 | 4 | 5
целое ::= цифра | целое цифра
3.49. Пусть во входном потоке находится последовательность литер, за-канчивающаяся точкой (кодировка ASCII). Вывести в выходной поток последо-вательность литер, измененную следующим образом:
a) заменить все символы ‘?’ на’!’;
b) удалить все символы ‘-‘ и удвоить все символы ‘&’;
c) удалить все символы, не являющиеся строчными латинскими буква-ми;
d) заменить все прописные латинские буквы строчными (другие симво-лы копировать в выходной поток без изменения);
e) заменить все строчные латинские буквы прописными (другие симво-лы копировать в выходной поток без изменения);
f) каждую группу рядом стоящих символов ‘+’ заменить одним таким символом;
g) каждую группу из n рядом стоящих символов ‘∗’ заменить группой из n/2 рядом стоящих символов ‘+’ ( n >= 2 ); одиночные ‘∗’ копировать в вы-ходной поток без изменения;
h) удалить из каждой группы подряд идущих цифр все начальные не-значащие нули (если группа состоит только из нулей, то заменить эту группу одним нулем);
i) удалить все комбинации символов the;
j) оставить только те группы цифр, которые составлены из подряд иду-щих цифр с возрастающими значениями; все остальные цифры и группы цифр удалить ( другие символы копировать в выходной поток без изменения);
k) заменить все комбинации символов child комбинациями символов children;
l) удалить группы символов, расположенные между фигурными скоб-ками { и }. Скобки тоже должны быть удалены. Предполагается, что скобки сба-лансированы, и внутри каждой пары скобок других фигурных скобок нет.
3.50. Пусть во входном потоке находится последовательность литер, за-канчивающаяся маркером конца $ (кодировка ASCII). Вывести в выходной по-ток последовательность литер, измененную следующим образом:
a) удалить из каждой группы подряд идущих цифр, в которой более двух цифр и которой предшествует точка, все цифры, начиная с третьей (на-пример, a+12.3456-b-0.456789+1.3-45678 преобразуется в a+12.34-b-0.45+1.3-45678);
b) удалить из каждой группы цифр, которой не предшествует точка, все начальные нули (кроме последнего, если за ним идет точка либо в этой группе нет других цифр, кроме нулей ; например, a-000123+bc+0000.0008-0000+0001.07 преобразуется в a-123+bc+0.0008-0+1.07).

*/



/*
    // 3.17. Для данных чисел a, b и c определить, сколько корней имеет урав-нение ax2+bx+c = 0, и распечатать их.
    // Если уравнение имеет комплексные корни, то распечатать их в виде v ± iw.
    // D = b2 -4ac ; x12 = ( -b+-sqrt(D) ) / 2a
    {
    double a(66.0), b(4.0), c(3.0), D;
    D = b*b-4*a*c;
    if (D>0)
        cout << "x1=" << (-b+sqrt(D))/(2*a) << "; x2=" << (-b-sqrt(D))/(2*a) << endl;
    else
        cout << "x1=" << -b/(2*a) << "+i*" << sqrt(abs(D))/(2*a) << "; x2=" << -b/(2*a) << "-i*" << sqrt(abs(D))/(2*a) << endl;
    }

    //3.18. Подсчитать количество натуральных чисел n ( 111 ≤ n ≤ 999 ), в записи которых есть две одинаковые цифры.
    {
        int k=0;
        for (int i=111; i<=999; ++i)
        {
            if ( (i/100 == i/10%10) || (i/100 == i%10) || (i/10%10 == i%10) )
            {
                cout << i << endl;
                k+=1;
            }
        }
        cout << "k=" << k << endl;
        //system("pause");
    }

    // 3.19. Подсчитать количество натуральных чисел n ( 102 ≤ n ≤ 987 ), в которых все три цифры различны.
    {
        int k=0;
        for (int i=102; i<=987; ++i)
        {
            if ( (abs(i/100 - i/10%10)>0) && (abs(i/100 - i%10))>0 && (abs(i/10%10 - i%10)>0) )
                {
                    cout << i << endl;
                    k+=1;
                }
        }
        cout << "k=" << k << endl;
    }

    // 3.20. Подсчитать количество натуральных чисел n ( 11 ≤ n ≤ 999 ), являющихся палиндромами, и распечатать их.
        for (int i=11; i<=999; ++i)
            {
                if (((i<100) && ((i/10)==(i%10))) || ((i>=100) && ((i/100)==(i%10))))
                    cout << "palindrom " << i << endl;
            }

    // 3.21. Подсчитать количество цифр в десятичной записи целого неотрицательного числа n.
    {
        int a, ta, n;
        a=ta=123321; n=0;
        while (ta)
            {
                n+=1;
                ta/=10;
            }
        cout << a << " " << n << endl;
    }

    // 3.22. Определить, верно ли, что куб суммы цифр натурального числа n равен n2.
    {
        int a, ta, s;
        a=ta=25; s=0;
        while (ta)
            {
                s=s+ta%10;
                ta/=10;
            }
        cout << s << " " << a << " s3=a2 - " << (s*s*s==a*a) << endl;
    }

    // 3.23. Определить, является ли натуральное число n степенью числа 3.
    {
        int ta, tta;
        ta=10;
        while ((ta>1) && (ta%3==0))
            {
                tta=ta%3; ta/=3; cout << ta << " " << tta << endl;
            }
        if (tta==0)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    // 3.24. Для данного вещественного числа a среди чисел 1, 1 + (1/2), 1 + (1/2) + (1/3), ... найти первое, большее a.
    // 3.25. Для данного вещественного положительного числа a найти наи-меньшее целое положительное n такое, что 1 + 1/2 +1/3+ ... + 1/n > a.
    {
        double a, b;
        a=8.0; b=0.0;
        int i=1;
        while (a>b)
            {
                b = b + 1.0/i;  // потеря точности после ~10
                ++i;
            }
        cout << b << " " << i << endl;
    }

    // 3.26. Даны натуральное число n и вещественное число x. Среди чисел exp(cos(x^2k))sin(x^3k) ( k = 1, 2, ..., n )
    // найти ближайшее к какому-нибудь целому.
    {
        double const x=10;
        double expr, closest, delta, delta1;

        cout << "\n-------------------------------\n";
        closest = exp(cos(pow(x,2)))*sin(pow(x,3));
        delta = abs(closest - round(closest));

        for (int k=1; k<=30; ++k)
            {
                expr = exp(cos(pow(x,2*k)))*sin(pow(x,3*k));
                delta1 = abs(expr - ceil(expr));
                if (delta1 < delta){
                    delta = delta1;
                    closest = expr;
                }
                cout  << setw(10) << expr << space << setw(5) << round(expr) << space << setw(5) << delta1 << endl;
            }
        cout << closest << space << delta << endl;

    }

    // 3.27. Дано натуральное число n. Найти значение числа, полученного следующим образом:
    // из записи числа n выбросить цифры 0 и 5, оставив прежним порядок остальных цифр.
    {
        cout << "\n--------------------------------\n";
        int n, temp, n2=0, dec=1;
        temp=n=7525065;
        while (temp)
            {
                if (!((temp%10==0)||(temp%10==5))){
                    n2 = n2 + dec*(temp%10);
                    dec*=10;
                }
                temp/=10;
            }
        cout << endl << n2 << endl;
    }

    // 3.28. Дано натуральное число n. Получить все такие натуральные q, что n делится на q2 и не делится на q3.
    {
        start;
        int n = 99;
        for (int q=2; q<=n/2; ++q){
            if ( (n%(q*q)==0) && (!(n%(q*q*q)==0)) )
                cout << q << space << n << "/" << q*q << "=" << static_cast<double>(n)/(q*q) << endl;
        }

    }

    // 3.29. Дано натуральное число n. Получить все его натуральные делители.
    {
        start;
        int n = 99;
        for (int i=2; i<=n/2; ++i){
            if (n%i==0)
                cout << i << endl;
        }
    }

    // 3.30. Дано целое число m > 1.Получить наибольшее целое k, при котором 4k < m.
    {
        start;
        int m = 100, k;
        k = (m%4==0)?(m/4-1):(m/4);
        cout << k << endl;
    }

    //3.31. Дано натуральное число n. Получить наименьшее число вида 2r, превосходящее n.
    {
        start;
        int n = 103, r;
        r = n/2+1;
        cout << r << endl;

    }


    // 3.32. Распечатать первые n простых чисел ( p - простое число, если p >= 2 и делится только на 1 и на себя).
    {
        start;
        bool prost = true;
        int n = 30, m=0, p=2;

        while ((prost) && (m<n))
        {
            p++;
            for (int j=2; j<p/2+1; ++j)
            {
               if (p%j==0)
               {
                   prost = false;
                   break;
               }
            }
            if (prost)
                cout << m+++1 << space << p << endl;
            else prost = true;
        }


//
//        int n = 20; int p=2; int i=1;
//        bool prostoe=true;
//
//            while ((prostoe) && (i<=n))
//            {
//                prostoe = true;
//                p++;
//                for (int j=2; j<p/2+1; ++j)
//                {
//                    if (p%j==0)
//                    {
//                        prostoe = false;
//                        break;
//                    }
//                }
//                if (prostoe)
//                {
//                    cout << p << endl;
//                    ++i;
//                }
//                else prostoe = true;
//            }
//
    }

    //3.33. Даны вещественные числа x и y ( x > 0, y > 1). Получить целое число k (положительное, отрицательное или равное нулю),
    // удовлетворяющее условию y^(k-1) ≤ x < y^k.

    {
        start;
        double x=58.0, y=-3.78;
        int k = 0;
        bool flag=true;

        while  (flag)
        {
            if ( (  (!(pow(y,k-1)>x)) && (x<(pow(y,k)))  )  ||  (  (!(pow(y,-k-1)>x)) && (x<(pow(y,-k)))  ) )
             {
                cout << k << space << setprecision(4) << pow(y,k-1) << " <= " << x << " < " << pow(y,k) << endl;
                flag = false;
            }
            else k++;
        }
    }

    // 3.34. Распечатать первые n чисел Фибоначчи ( f0 = 1; f1 = 1; fk+1 = fk-1+ fk; k = 1, 2, 3,...)
    {
        start;
        const int n = 22;
        int f0 = 0, f1=1, ff;

        for (int i=2; i<=n; ++i)
        {
            ff = f0 + f1;
            f0 = f1; f1 = ff;
            cout << i << space << ff << endl;
        }
    }

    // 3.35. Вычислить с точностью eps > 0 значение «золотого сечения» - 0.5∗(1+√5) - предел последовательности { qi }при i → ∞
    // qi = fi / fi-1, i = 2, 3,...где fi - числа Фибоначчи (см. предыдущую задачу).
    // Считать, что требуемая точность достигнута, если | qi-qi+1| < eps.
    {
        start;

        const double eps=0.00001;
        bool cond=true;
        int f0 = 1, f1=1, ff;
        int i=1;

        while (cond)
        {
            ff = f0 + f1;                    cout << i++ << space << ff << endl;
            cout << i++ << space << ff << space << f1 << space << setprecision(5) << (double)ff/f1
                 << space << abs((double)f1/f0 - (double)ff/f1) << endl ;


            if ( abs((double)f1/f0 - (double)ff/f1 )<eps )
            {
                cond = false;
            }
            else
            {
                f0 = f1; f1 = ff;
            }
        }
    }

    // 3.36. Распечатать числа Фибоначчи (см. задачу 3.34), являющиеся простыми числами со значениями меньше n.
    {
        start;

        bool cond=true;
        int f0 = 1, f1=2, ff;
        int i = 4;
        const int n = 10000;

        while (cond)
        {
            ff = f0 + f1;
            if (ff<n)
            {
                bool prost = true;
                int j=2;
                while ((prost) && (j<ff/2))
                {
                    if (ff%j++ == 0)
                        prost = false;
                }
                if (prost)
                {
                    cout << i++ << space << ff << endl;
                }
                f0 = f1; f1 = ff;
            }
            else
            {
                cond=false;
            }
        }
    }

    // 3.37. Вычислить с точностью eps > 0 значение числа e - предел последо-вательности { xi }при i → ∞
    // xi = (1+1/i)^i, i = 1, 2, ... Считать, что требуемая точность достигнута, если | xi-xi+1| < eps.
    {
        start;
        const double eps = 0.0001;
        double x;
        bool cond = true;

        int i = 1;
        x = pow((1+(double)1/i),i);

        while (cond)
        {
            ++i;
            double temp = pow((1+(double)1/i),i);
            cout << i << space << setprecision(7) << x << space << temp << space << temp-x<< endl;

            if (abs(temp-x)<eps)
            {
                cond=false;
            }
            else x = temp;
        }
    }

    // 3.38. Вычислить значение Σ i ! для i, изменяющихся от 1 до n.
    // Воспользоваться соотношением Σ i ! = 1 + 1*2 + 1*2*3 +...+ 1*2*3*...*n = 1+2*(1+3*(1+ +n*(1)...)).
    {
        start;

        const int n = 10;
        int s=0, f=1;
        for (int i=1; i<=n; ++i)
        {
            f*=i; s+=f;
            cout << i << space << s << endl;
        }
    }

    // 3.39. Пусть a0 и b0 - положительные вещественные числа. Соотношениями an+1 = √(anbn) ; bn+1 = ( an+bn ) / 2 при n = 0, 1, 2, ...
    // задаются две бесконеч-ные числовые последовательности {an}и {bn}, которые сходятся к общему пре-делу M(a0,b0),
    // называемому арифметико-геометрическим средним чисел a0 и b0. Найти приближенное значение M(a0,b0) с точностью eps > 0.
    // Поскольку при a0 < b0 ai < bi и, более того, a0 < a1 < ... < ai < ... bi < ... < b1 < b0 ,
    // то в качестве подходящего критерия прекращения вычислений можно использовать соотно-шение | ai - bi | < eps.
    {
        start;
        const double eps=0.001;
        // double M;
        const double a0=10;
        const double b0=20;
        double a, b;
        bool cond = true;

        a = a0; b = b0;

        while (cond)
        {
            a = sqrt(a*b); b = (double)((a+b)/2);
            if (abs(a-b)<eps)
            {
                cout << a << space << b << space << a-b << endl;
                cond = false;
            }
        }
    }

    // 3.40. Вычислить квадратные корни вещественных чисел x = 2.0, 3.0, ... , 100.0.
    // Распечатать значения x, √x, количество итераций, необходимых для вычисления корня с точностью eps > 0.
    // Для a > 0 величина √a вычисляется следующим образом:
    // a0 = 1; ai+1 = 0.5∗( ai+a/ai ) i = 0, 1, 2,... Считать, что требуемая точность достигнута, если | ai-ai+1| < eps.
    {
        start;

        const double eps = 0.0001;

        for (int i=2; i<=16; ++i)
        {
            double a = (double)i;
            double temp;
            bool cond = true;

            while (cond)
            {
                temp = 0.5 * (a+(double)(i/a));
                if (abs(temp-a)<eps)
                {
                    cout << i << space << a << endl;
                    cond = false;
                }
                else
                    a = temp;
            }
        }
    }


    // 3.41. Найти приближенное значение числа π с точностью eps > 0.
    // Для этого можно использовать представление числа 2/π
    // в виде произведения корней √(1/2) *√(1/2+1/2√(1/2))*√(1/2+ 1/2√(1/2+1/2√(1/2)))*... .
    // Вычисления прекращаются, когда два следующих друг за другом приближения для числа π будут от-личаться меньше, чем на eps.


    // 3.42. Для данного вещественного числа x и натурального n вычислить:
    // a) sin x + sin2x + ... + sinnx
    // b) sin x + sinx^2 + ... + sinx^n
    // c) sin x + sin(sin x ) + ... + sin ( sin (... sin(sin x) ... ))
    {
        start;

        const double x = 0.04;
        const int n = 10;

        double s1, s2, s3;
        s1 = s2 = 0;
        s3 = x;

        for (int i=1; i<=n; ++i)
        {
            s1+=sin(i*x);
            s2+=sin(pow(x,n));
            s3+=sin(s3);
            cout << s1 << space << s2 << space << s3 << space << endl;
        }

    }

    // 3.44. Вычислить 1 - 1/2 + 1/3 - 1/4 + ...+1/9999 - 1/10000 следующими способами:
    // a). последовательно слева направо;
    // b). последовательно справа налево;
    // c). последовательно слева направо вычисляются 1 +1/3 + 1/5 + ... + 1/9999 и 1/2 + 1/4 + ... + 1/10000, затем второе значение вычитается из первого;
    // d). последовательно справа налево вычисляются 1 +1/3 + 1/5 + ... + 1/9999 и 1/2 + 1/4 + ... + 1/10000, затем второе значение вычитается из первого.
    {
        start;
        double s1 = 0.0; double s2 = 0.0;
        int k = -1;
        for (int i=1; i<=10000; ++i)
        {
            k *= -1;
            s1 += k /(double)i; s2 += - k /(double)(10000-i+1);
        }

        cout << s1 << space << s2 << endl;
    }

    {
        start;
        double s1 = 0.0; double s2 = 0.0;

        for (int i=1; i<=10000; i+=2)
        {
            s1 += 1 /(double)i; s2 += 1 /(double)(i+1);
        }

        cout << s1 - s2 << endl;
    }

    // 3.45. Натуральное число называется совершенным, если оно равно сумме всех своих делителей, за исключением самого себя.
    // Дано натуральное число n. Получить все совершенные числа, меньшие n.

    {
        start;

        const int NN = 33550337;
        int s;

        for (int n=33550335; n<=NN; ++n)
        {
            s = 0;
            for (int j=1; j<=n/2; ++j)
            {
                if (n%j==0)
                {
                    s+=j;
                    if (s>n)
                        break;
                }
            }
            if (s==n)
                cout << "Beauty " << n << endl;
        }
    }

    // 3.46. Определить, является ли число простых чисел, меньших 10000, простым числом.
    {
        start;
        bool prost = true;
        //int n = 30, m=0, p=2;
        int m=0, p=2;
        const int NN = 1000;

        // while ((prost) && (m<n))
        while ((prost) && (p<=NN))
        {
            p++;
            for (int j=2; j<p/2+1; ++j)
            {
               if (p%j==0)
               {
                   prost = false;
                   break;
               }
            }
            if (prost)
                cout << m+++1 << space << p << endl;
            else prost = true;
        }
        cout << m << endl;

        prost = true;
        for (int i=2; i<=m/2; ++i)
        {
            if (m%2==0)
            {
                prost = false;
                break;
            }
        }

        cout << ((prost)?"YES":"NO") << endl;
    }

    // 3.47. Если p и q - простые числа и q = p+2, то они называются простыми сдвоенными числами или “близнецами” (twin primes).
    // Например, 3 и 5 - такие простые числа. Распечатать все простые сдвоенные числа, меньшие N.

    {
        start;
        bool prost = true;
        //int n = 30, m=0, p=2;
        int m=0, p=2;
        int prev_p;
        const int N = 1000;

        // while ((prost) && (m<n))
        prev_p=p;
        while ((prost) && (p<=N))
        {
            p++;
            for (int j=2; j<p/2+1; ++j)
            {
               if (p%j==0)
               {
                   prost = false;
                   break;
               }
            }
            if (prost)
            {
                if ((p-prev_p)==2)
                {
                    cout << m+++1 << space << prev_p << space << p << endl;
                }
                prev_p=p;
            }
            else prost = true;
        }

    }

*/



/*
3.43. Алгоритм Евклида нахождения наибольшего общего делителя (НОД) неотрицательных целых чисел основан на следующих свойствах этой величины:
пусть m и n - одновременно не равные нулю целые неотрицательные числа и m ≥ n.
Тогда, если n = 0, то НОД(n, m) = m, а если n ≠ 0, то для чисел m, n, и r, где r - остаток от деления m на n,
выполняется равенство НОД(m, n) = НОД(n, r). Используя алгоритм Евклида, определить наибольший общий дели-тель неотрицательных целых чисел a и b.
*/

/*
// 2.30. Выясните некоторые свойства и особенности поведения доступно-го Вам транслятора Си:
//a) выяснить, сколько байт отведено для хранения данных типа short, int, long, float, double и long double;
    cout << sizeof(long double) << endl;
// b) выяснить способ представления типа char ( signed- или unsigned- вариант );
    cout << setw(20) << "char" << space << sizeof(char) << space << CHAR_MIN << space << CHAR_MAX << endl;
    cout << setw(20) << "signed char" << space << sizeof(signed char) << space << SCHAR_MIN << space << SCHAR_MAX << endl;
    cout << setw(20) << "unsigned char" << space << sizeof(unsigned char) << space << UCHAR_MAX << endl;
//c) проконтролировать, все ли способы записи констант допустимы:
//• целых ( обычная форма записи, u/U, l/L, их комбинации; за-пись констант в восьмеричной и шестнадцатиричной системах счис-ления )
//7
//• вещественных ( обычная форма записи, в экспоненциальном виде, f/F, l/L, e/E )
//• символьных ( обычная форма записи, с помощью эскейп-последовательности ) и строковых ( в частности, происходит ли кон-катенация рядом расположенных строковых констант )
//d) выяснить, как упорядочены коды символов '0' - '9', 'a' - 'z', 'A' - 'Z', пробел (между собой и относительно друг друга);
    cout << setw(20) << static_cast<int>('a') << space << static_cast<int>('b') << space << static_cast<int>('A') << space << static_cast<int>('B') << endl;
//e) проконтролировать, происходит ли инициализация переменных по умолчанию;
    int i; cout << i << endl;
//f) проверить, реагирует ли транслятор на попытку изменить константу;
    const int cI=5; // cI=6;
//g) исследовать особенности выполнения операции % с отрицательными операндами;
    cout << setw(20) << -10%6 << space << -10%5 << space << -10%4 << space
                     << 10%-6 << space << 10%-5 << space << 10%-4 << space
                     << -10%-6 << space << -10%-5 << space << -10%-4 << endl;
//h) проверьте, действительно ли операции отношения == и != имеют более низкий приоритет, чем все другие операции отношения;
    cout << (5==6-1) << space << (5!=5+1) << endl;
//i) проверьте, действительно ли выполняется правило "ленивых вычислений" выражений в Си
//, т.е. прекращается ли вычисление выражений с логиче-скими операциями, если возможно "досрочно" установить значение результата;
//j) проверьте, все ли виды операнда операции sizeof (X), определяемые стандартом для арифметических типов, допускаются компилятором; действи-тельно ли выражение X не вычисляется.
*/


/*
    int iN=12345;
    // 2.28. Циклически сдвинуть значение целочисленной величины на n позиций вправо.
    cout << setw(10) << iN/10 << space << iN/100 << space << iN/1000 << endl;
    // 2.29. Циклически сдвинуть значение целочисленной величины на n по-зиций влево.
    cout << setw(10) << iN*10 << space << iN*100 << space << iN*1000 << endl;
*/

/*
    // 2.25. «Упаковать» четыре символа в беззнаковое целое. Длина беззнакового целого равна 4.
    // cout << sizeof(unsigned int);
    // 2.26. «Распаковать» беззнаково                cout << m+++1 << space << p << space << prev_p << endl;е целое число в четыре символа. Длина беззнакового целого равна 4.

    const char c1='a', c2='b', c3='c', c4='d';
    cout << (char)(int)c1 << (char)(int)c2 << (char)(int)c3 << (char)(int)c4 << endl;

    int y;
    y=c1+256+c2+256+c3+256+c4;
    cout << y << endl;

    cout << (char)(y-(c1+256+c2+256+c3+256)) << space << (char)(y-(c1+256+c2+256+256+c4)) << space
         << (char)(y-(c1+256+256+c3+256+c4)) << space << (char)(y-(256+c2+256+c3+256+c4)) << endl;

    cout << (c1<<15)+(c2<<10)+(c3<<5)+c4 << endl;
    cout << (char)((c1<<15)+(c2<<10)+(c3<<5)+c4 - ((c2<<10)+(c3<<5)+c4));
    cout << setw(20) << "unsigned int" << space << sizeof(unsigned int) << space << UINT_MAX << endl;
*/

/*
2.27. Заменить в целочисленной переменной x n бит, начиная с позиции p, n старшими инвертированными битами целочисленной переменной y.


/*
// 2.22. Дано вещественное число x . Не пользуясь никакими операциями, кроме умножения, получить (степени)
// a) x 21 за шесть операций
int x1, x2, x3, x4, x5;
x1=2;

x2=x1*x1; // 2
cout << "x^2 " << x2 << endl;
x3=x2*x2; // 4
cout << "x^4 " << x3 << endl;
x4=x3*x3; // 8
cout << "x^8 " << x4 << endl;
x4=x4*x4; // 16
cout << "x^16 " << x4 << endl;
x4=x4*x3*x1; // 21
cout << "x^21 " << x4 << endl;

// b) x 3 и x 10 за четыре операции  ???
x2=x1*x1; // 2
x3=x2*x1; // 3
x4=x2*x3; // 5
x4=x4*x4; // 10

// c) x 5 и x 13 за пять операций
x2=x1*x1; // 2
x3=x2*x1; // 3
x4=x2*x3; // 5
x4=x4*x4; // 10
x4=x4*x3; //13

// d) x 2 , x 5 и x 17 за шесть операций
x2=x1*x1; // 2
x3=x2*x1; // 3
x4=x2*x3; // 5
x5=x4*x4; // 10
x5=x5*x4*x2; //17

// e) x 4 , x 12 и x 28 за шесть операций
x2=x1*x1; // 2
x3=x2*x2; // 4
x4=x3*x3; // 8
x5=x4*x4; // 16
x4=x5*x4*x3; // 28
*/

/*
// 2.20. Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа.

    int k=123;
    cout << k%10*100 + k%100/10*10 + k%1000/100 << endl;

// 2.21. Идет n-ая секунда суток. Определить, сколько полных часов и полных минут прошло к этому моменту.

    int s=3725;
    cout << s << " seconds: " << s/3600 << " hours; " << (s-s/600*600)/60 << " minutes; " << (s-s/600*600)%60 << " seconds;"<< endl;
*/


/*
// 2.18. Целой переменной k присвоить значение, равное сумме цифр в записи целого положительного трехзначного числа x.
    int k=567;
    cout << k%10 + k%100/10 + k%1000/100 << endl;

// 2.19. Целой переменной k присвоить значение, равное первой цифре дробной части в записи вещественного положительного числа x.
    double x = 11.789;
    int kk;

    kk = x*10;
    kk %=10;
    cout << x << endl;
    cout << kk << endl;
*/


/*
2.17. Целой переменной k присвоить значение, равное третьей от конца цифре в записи целого положительного числа x.

    unsigned int k, x=3454721;

    k = (x%1000-x%100)/100;
    cout << k << endl;

*/


/*
2.16. Дано вещественное число x . Не пользуясь никакими операциями, кроме умножения, сложения и вычитания, вычислить
2x4-3x3+4x2-5x+6 (степени).
Разрешается использовать не более четырех умножений и четырех сложений и вычитаний.


   double x=2;
   cout << (((((2*x)-3)*x)+4)*x-5)*x+6; // 20
*/

/*
// 2.15. Что будет напечатано в результате выполнения следующего фрагмента программы?
double d = 3.2, x; int i = 2, y;
x = ( y = d / i ) * 2; printf ("x = %f ;y = %d\n", x, y);
y = d * ( x = 2.5 / d); printf ("x = %f; y = %d\n", x, y);
x = d * (y = ((int)2.9 + 1.1)/d); printf ("x = %d y = %f\n", x, y);
*/


/*
    //2.14. Что будет напечатано в результате выполнения следующего фрагмента программы?
	double d; float f; long lng; int i; short s;
    // d = 100/3.0; printf("d = %.30f\n",d);

	s = i = lng = f = d = 100/3;
	d = f = lng = i = s =100/3;
	s = i = lng = f = d = 1000000/3;
	d = f = lng = i = s =1000000/3;
	lng = s = f = i = d =100/3;
	f = s = d = lng = i = (double)100/3;
	s = i = lng = f = d = 100/(double)3;
	f = s = d = lng = i = (double)100/3;
	i = s = lng = d = f = (double)(100/3);

	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
*/


/*
// 2.13. Допустимо ли в Си? Если "да" - опишите семантику этих действий; если "нет" - объясните почему.
int  i;
i = (1 || 2) % (1 | 2 );
printf ( "i = %d\n", i);


int  a, b, m, n, z;
m = n = 5;
z = a = b = 0;
z--, ( a = b ) = z + ( m != n );
printf ("%d %d %d %d %d\n", a, b, m, n, z);


int  i = 1;
i = i << i | i;
printf ( "i = %d\n", i);


double  x = 1.9; int a;
double  b = 3.7;
a = b += (1 && 2 || 3) != (int)x;
printf ("%f %d %f\n", x, a, b);


int x;
x = 5; ++ x =10;
printf ("%d\n", x);


int i, x, y;  x = 5; y = 10; i = 15;
x = ( y = 0, i = 1);
printf("%d %d %d\n", i, x ,y);
( x = y == 0) , i=1;
printf("%d %d %d\n", i, x, y);


int x, y;
x = 5; y = x && ++ x;
printf("%d %d\n", x, y);


int x = 2, y, z;
x *= 3+2; x *= y = z = 4;
printf ("%d %d %d\n", x, y, z);
x = y == z; x == ( y = z );
printf ("%d %d %d\n", x, y, z);


int x = 2, y = 1, z = 0;
y = x && y || z;
z = x / ++x;
printf(" %d %d %d\n", x, y, z);


int x = 03, y = 02, z = 01;
printf("%d\n", x | y & -z);
printf("%d\n", x ^ y & -z);
printf("%d\n", x & y && z);
printf("%d\n", x<<3);


int x, y, z;  x = y = z = 1;
x += y += z;
printf("%d\n", x < y ? y++ : x++);
printf("%d\n", z+=x<y ? ++x : y--);
printf("%d %d %d\n", x, y, z);
printf("%d\n", z>=y && y>=x);


int x, y, z, i;  x = y = z = 1;
i = ++x || ++y && ++z;
printf("%d%d%d%d\n", x,y,z,i);
i = x++ <= --y || ++z >= i;
printf("%d%d%d%d\n", x,y,z,i);

*/


/*
#define PRINT_TYPE(x) \
if (typeid(x).name()==typeid(bool).name()) {cout << #x << " - " << "bool" << endl;} \
if (typeid(x).name()==typeid(char).name()) {cout << #x << " - " << "char" << endl;} \
if (typeid(x).name()==typeid(signed char).name()) {cout << #x << " - " << "signed char" << endl;} \
if (typeid(x).name()==typeid(unsigned char).name()) {cout << #x << " - " << "unsigned char" << endl;} \
if (typeid(x).name()==typeid(short int).name()) {cout << #x << " - " << "short int" << endl;} \
if (typeid(x).name()==typeid(unsigned short int).name()) {cout << #x << " - " << "unsigned short int" << endl;} \
if (typeid(x).name()==typeid(unsigned int).name()) {cout << #x << " - " << "unsigned int" << endl;} \
if (typeid(x).name()==typeid(int).name()) {cout << #x << " - " << "integer" << endl;} \
if (typeid(x).name()==typeid(long).name()) {cout << #x << " - " << "long" << endl;} \
if (typeid(x).name()==typeid(unsigned long).name()) {cout << #x << " - " << "unsigned long" << endl;} \
if (typeid(x).name()==typeid(long long).name()) {cout << #x << " - " << "long long" << endl;} \
if (typeid(x).name()==typeid(float).name()) {cout << #x << " - " << "float" << endl;} \
if (typeid(x).name()==typeid(double).name()) {cout << #x << " - " << "double" << endl;} \
if (typeid(x).name()==typeid(long double).name()) {cout << #x << " - " << "long double" << endl;} \
*/
// #define PRINT_TYPE(x) cout << #x << " - " << typeid(x).name() << endl;

/*
    // 2.12. Определить тип выражений:    // #include <typeinfo>

    cout << setw(20) << "bool" << space << sizeof(bool) << endl;
    cout << setw(20) << "char" << space << sizeof(char) << space << CHAR_MIN << space << CHAR_MAX << endl;
    cout << setw(20) << "signed char" << space << sizeof(signed char) << space << SCHAR_MIN << space << SCHAR_MAX << endl;
    cout << setw(20) << "unsigned char" << space << sizeof(unsigned char) << space << UCHAR_MAX << endl;
    cout << setw(20) << "short int" << space << sizeof(short int) << space << SHRT_MIN << space << SHRT_MAX << endl;
    cout << setw(20) << "unsigned short int" << space << sizeof(unsigned short int) << space << USHRT_MAX << endl;
    cout << setw(20) << "int" << space << sizeof(int) << space << INT_MIN << space << INT_MAX << endl;
    cout << setw(20) << "unsigned int" << space << sizeof(unsigned int) << space << UINT_MAX << endl;
    cout << setw(20) << "long" << space << sizeof(long) << space << LONG_MIN << space << LONG_MAX << endl;
    cout << setw(20) << "unsigned long" << space << sizeof(unsigned long) << space << ULONG_MAX << endl;
    cout << setw(20) << "long long" << space << sizeof(long long) << space << LLONG_MIN << space << LLONG_MAX << endl;
    cout << setw(20) << "unsigned long long" << space << sizeof(unsigned long long) << space << ULLONG_MAX << endl;

    int x=2000000000; cout << endl << x+x; // overflow

    cout << endl << endl;
    cout << setw(20) << "float" << space << sizeof(float) << space << FLT_MIN << space << FLT_MAX << endl ;
    cout << setw(20) << "double" << space << sizeof(double) << space << DBL_MIN << space << DBL_MAX << endl ;
    cout << setw(20) << "long double" << space << sizeof(long double) << space << LDBL_MIN << space << LDBL_MAX << endl ;
    cout << endl << endl;

    char c; short s; int i; unsigned u; signed char sc;
    float f; double d; long lng; unsigned short us; long double ld;
    // typeid(...).name();     PRINT_TYPE(long long);

    PRINT_TYPE(c-s/i); // int
    PRINT_TYPE(u*3-3.0*u-i); // double
    PRINT_TYPE(u-us*i); // unsigned int
    PRINT_TYPE((sc+d)*ld); // long double
    PRINT_TYPE((5*lng-'a')*(s+u/2)); // long
    PRINT_TYPE((f+3)/(2.5f-s*3.14)); // double
*/

/*
2.11. Написать эквивалентное выражение, не содержащее операции !

   // int a=5, b=6, c=7, d=8;

   // cout << !(a>b) << " " << (a<=b) << endl;
   // cout << !(2*a==b+4) << " " << ((2*a>b+4) || (2*a<b+4)) << endl;
   // cout << (! ( a<b && c<d )) << " " << ( a>=b || c>=d );
   // cout << !(a<2 || a>5) << " " << (a>=2 && a<=5 );
   // cout << ! ( a<1 || b<2 && c<3 ) << " " << ( a>=1 && b>=2 || c>=3 ) << endl;
*/

/*
2.9. В логике справедливы утверждения:
not (not x) = x  // только для x=1
x and true = x     // только для 1
Верны ли соответствующие утверждения для операций ! и && в Си? Ответ обосновать.

    int x = 1;
    cout << (x && true);

*/


/*
2.8. Верно ли записаны выражения? Для верно записанных выражений вычислить их значения, определить тип результата (операции  +  -  *  /  %  ++  операции отношения, операции присваивания ):
int  i,  j,  k, m;  char c, d;   i = 1;  j = 2;  k = -7; m = 0; c = 'w';

    int i, j, k, m;
    char c, d;

    i = 1;  j = 2;  k = -7; m = 0; c = 'w';

    // d = 'a' + 1 < c; // char(1)
    // m = - i - 5 * j >= k+1; // -1 - 10 >= -6 // -11>=-6 // false // 0
    // i + j++  + k = = -2*j;  // -4==-6 // false // 0
    // m = 3 < j < 5; // 1
    // m = 3 == j < 5; // 0
    // m == c = 'w'; // error
    // m = c != 87; // 1
    // m = ! c = 87; // error
    // m = !c+87; // 87
    // !m==c+87; // ok
    // m!=c+87; // ok
    // k == j - 9 == i; // 1
    // k *=3 + j; // -35

    // i + j = !k;  // error but (i + (j=!k)) is 1
    // i += ++ j + 3;  // 7 3
    // k %= m = 1 + m / 2; // 0 1
    // 1+3*m+=7/5; // error
    // k = 1 + 3 * (m+=7) / 5; // 5 7
    // c + i < c - 'x'+10; // 0
    // i - k == '0'+9 < 10; // 8 == 57<10; // 0
*/


/*

// 2.7. Верно ли записаны выражения? Для верно записанных выражений вычислить их значения ( операции  +  -  *  /    ++  - -  операции присваивания ):
int a, b, c;
a = 2;  b = 6;  c = 3;

-  -  - a		--  - a		b--  - a		a += a ++	++ b / a ++ * --c
a --- b		- a-- -b	a ++ = b	a = a ++	b++ / ++a * c --
-  --a		a-  --c		a ++ = a	++ a = b	a = ( b + 1 ) ++
*/



/*
Верно ли решена задача:
«значение целочисленной переменной с увеличить на 1;
целочисленной переменной а присвоить значение, равное удвоенному значению переменной с ». = 12
*/

/*
2.5. Верно ли решена задача: «значение целочисленной переменной с уменьшить на 1;
целочисленной переменной а присвоить значение, равное частному от деления переменной с на 2».
= 2
*/

/*
int a, c;  c = 5;

// --c; a = c/2;
// a = --c / 2;
// c -=1; a = c%2;  // 0
// a = c -- / 2;
// a = c -= 1/2; // 5
//a = (c = c -1)/2;
// a = (c -=1)/2;
// a = (c-=1)/2.0;

*/

/*
int a, c;  c = 5;
// c ++ ; a = 2 * c; // 12
// a = 2*c++; // 10
// c += 1; a = c + c; // 12
// a = c+++c; // 11
// a = c + (++c); // 12
// ++c; a = c+c; // 12
// a = ++c + c; // 12
// a = c+=1 + c; // 11
a = (c+=1) + c; // 12
*/


/*

int a, b, c, d, e;
a = 2;  b = 13;  c = 7;  d = 19;  e = -4;

cout << b / a / c << endl;
cout << d / a % c << endl;
cout << c % d-e << endl;
cout << -e % a + b / a *-5+5 << endl; // -25
cout << b % e << endl; // 1
cout << 7-d%+(3-a) << endl; // 7
cout << b % - e * c << endl; //  (b % -e) * c = 7
cout << 9 / c - - 20 / d << endl; // (9 / c) - (-20 / d) = 1 - (-1) = 2

*/


/*
    double b = 1.71;
    b = 1E-6 * 1000000;
    b = 0.314159E1F;
    b = .005;
    b = 0010000E-04;
    b = 5.E+2;
    b = 0e0;
    // b = 0x1A1.5;
    // b = 08.5;
    b = 0;
    b = 0X1E6;
    // b = 0F;
    b = 1234.56789L;
    b = 10000000000.0E-10D;
    // b = 3.1415U;
    b = 1e-2f;
    b = -12.3E-6;
    b = +10e6;
    // b = E-6;
*/


/*
   int a=123;
   a=1E6;
   a = 123456789LU;
   a = -5;
    a = 0X20UL;
    a = '0';
    a = 011;
    // a = ‘\x7’;
    // a = 0X-1AD;
    // a = ‘\122’;
    a = 0010;
    a = 0xffL;
    // a = 01A;
    // a = -‘x’;
    // a = "x";
    // a = 'a'U;
    a = 010UL;
    a = '\n';
    a = +0x1af;
    a = 0X0;
*/
