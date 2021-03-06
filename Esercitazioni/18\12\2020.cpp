//0.9.8
#include <iostream>
#include <cmath>

using namespace std;

int mcd(int x, int y) {
    while (y > 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int mcm(int x, int y) {
    int r;
    r = (x * y) / mcd(x, y);
    return r;
}

int mcmn() {
    int ar[1000];
    int x, i;
    cout << "Inserire il numero di numeri tra cui fare mcm,\n";
    cin >> x;

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> ar[i];
    }
    i = x - 1;
    int r = mcm(ar[i], ar[i - 1]);
    i = i--;
    for (i; i > 0; i--) {
        r = mcm(ar[i], r);
    }
    cout << "M.C.M. è " << r;
    return 0;
}

int mcdn() {
    int ar[1000];
    int x, i;
    cout << "Inserire il numero di numeri tra cui fare mcd,\n";
    cin >> x;

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> ar[i];
    }
    i = x - 1;
    int r = mcd(ar[i], ar[i - 1]);
    i = i--;
    for (i; i > 0; i--) {
        r = mcd(ar[i], r);
    }
    cout << "M.C.D. è " << r;
    return 0;
}

int mcd3n() {
    int a, b, c, r;
    cout << "inserisci il primo numero";
    cin >> a;
    cout << "inserisci il secondo numero";
    cin >> b;
    cout << "inserisci il terzo numero";
    cin >> c;
    r = mcd(a, b);
    r = mcd(r, c);
    cout << "M.C.D. è " << r;
    return 0;
}

int mcm3n() {
    int a, b, c, r;
    cout << "inserisci il primo numero";
    cin >> a;
    cout << "inserisci il secondo numero";
    cin >> b;
    cout << "inserisci il terzo numero";
    cin >> c;
    r = mcm(a, b);
    r = mcm(r, c);
    cout << "M.C.M. è " << r;
    return 0;
}

int quadrato() {
    int x;
    int r;

    cout << "inserisci un numero\n";
    cin >> x;
    r = sqrt(x);

    if (x % r == 0) {
        cout << "Il numero è un quadrato perfetto \n";
    }
    else {
        cout << "Il numero non è un quadrato perfetto \n";
    }
    return 0;
}
/*
int fattoriale() {
    float x;
    cout << "Inserisci un numero , max 34" << "\n";
    cin >> x;
    float fat = 1;
    cout << "Fattoriale di " << x << " è \n";
    for (int i = x; i > 0; i = i - 1) {
        fat = x * fat;
        x = x - 1;
    }
    cout << fat << "\n";

    return 0;
}*/

float fattorialeR(float x) {
    if (x >= 2) {
        return x * fattorialeR(x - 1);
    }
    else {
        return 1;
    }
}

int media() {
    int x, i;
    double somma = 0, r = 0;

    cout << "Inserire il numero di numeri tra cui fare la media, max 1000\n";
    cin >> x;

    unsigned long long int numeri[1000];

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> numeri[i];
    }

    for (i = 0; i < x; i++) {
        somma = somma + numeri[i];
    }
    r = somma / x;
    cout << "La media è " << r;

    return 0;
}

int mediaArrotondata() {
    int x, i;
    long int somma = 0, r = 0;

    cout << "Inserire il numero di numeri tra cui fare la media, max 1000\n";
    cin >> x;

    unsigned long long int numeri[1000];

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> numeri[i];
    }

    for (i = 0; i < x; i++) {
        somma = somma + numeri[i];
    }
    r = somma / x;
    cout << "La media è " << r;

    return 0;
}

int MaxMin() {
    int x, i;
    unsigned long long int temp;
    int j;

    cout << "Inserire il numero di numeri tra cui trovare il minimo e il massimo \n";
    cin >> x;

    unsigned long long int numeri[1000];

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> numeri[i];
    }

    for (i = 0; i < x; i++) {
        for (j = i + 1; j < 10; j++)
        {
            if (numeri[j] < numeri[i]) {
                temp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp;
            }
        }
    }
    cout << "Il minimo è " << numeri[0] << " il massimo è " << numeri[x - 1];
    return 0;
}

int nPerfetto() {
    int n;
    int m;
    int x = 0;
    int Multipli[1000];

    do {
        cout << "Inserisci un numero maggiore di 0 \n";
        cin >> n;

    } while (n <= 0);

    for (int i = n - 1; i > 0; i--) {
        m = n % i;
        if (m == 0) {
            Multipli[i] = i;

            x = x + Multipli[i];
        }
    }
    if (x == n) {
        cout << n << " è un numero perfetto ";
    }
    else {
        cout << n << " non è un numero perfetto ";
    }
    return 0;
}


int nPrimo(int x) {
    bool V;
    int div = 0;
    int r;


    for (int i = 1; i < x / 2; i++) {

        if (div == 2) {
            V = false;
            return V;
        }


        r = x % i;
        if (r == 0) {
            div++;
        }

    }
    if (div == 1) {
        V = true;
        return V;
    }
}

int nPrimominore() {
    int x, v;
    cout << "Inserire un numero ";
    cin >> x;

    for (int i = x; i > 1; i--) {

        v = nPrimo(i);
        if (v == true) {
            cout << i << "\n";

        }

    }

    return 0;
}

int fibonacci() {
    int x, n1=1,n2=1,n3=0;
    cout << "Fino a che numero vuoi arrivare? ";
    cin >> x;
    cout << "1 1 ";
    
    while (n1<x) {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        cout << n3<<" ";
    }
    return 0;
}

int nAmicabili() {
    int m, n, n2;
    int Divisori = 0, Divisori2 = 0;
    cout << "\ninserisci primo numero ";
    cin >> n;
    cout << "inserisci secondo numero ";
    cin >> n2;

    for (int i = n - 1; i > 0; i--) {
        m = n % i;
        if (m == 0) {
            Divisori = Divisori + i;
        }
    }
    for (int i = n2 - 1; i > 0; i--) {
        m = n2 % i;
        if (m == 0) {
            Divisori2 = Divisori2 + i;
        }
    }
    if (Divisori2 == n && Divisori == n2) {
        cout << n << " e "<< n2 <<" sono numeri amicabili";
    }
    else
    {
        cout << n << " e " << n2 << " non sono numeri amicabili";
    }

    return 0;
}

int sommaFratti() {

    int a, b, c, d, r1, r2;
    cout << "inserisci il nominatore della prima frazione";
    cin >> a;
    cout << "inserisci il denominatore della prima frazione";
    cin >> b;
    cout << "inserisci il nominatore della seconda frazione";
    cin >> c;
    cout << "inserisci il denominatore della seconda frazione";
    cin >> d;
    int dmcm = mcm(b, d);
    r1 = (dmcm / b) * a;
    r2 = (dmcm / d) * c;
    cout << "Il risultato della somma è " << r1 + r2 << "/" << dmcm << "\n   " << r1 + r2 << "\n" << "_______\n\n   " << dmcm;
    return 0;
}

int grafica() {
    cout << "|--------------------------------------------|\n";
    cout << "|1.  Mcm due numeri                          |\n";
    cout << "|2.  Mcd due numeri                          |\n";
    cout << "|3.  Quadrato prefetto                       |\n";
    cout << "|4.  Fattoriale                              |\n";
    cout << "|5.  Fibonacci                               |\n";
    cout << "|6.  Numeri amicabili                        |\n";
    cout << "|7.  Max e min n numeri                      |\n";
    cout << "|8.  Media aritmetica n numeri               |\n";
    cout << "|9.  Numero perfetto                         |\n";
    cout << "|10. Numero primo                            |\n";
    cout << "|11. Primi minori di N                       |\n";
    cout << "|12. Mcm tre numeri                          |\n";
    cout << "|13. Mcd tre numeri                          |\n";
    cout << "|14. Mcd n numeri                            |\n";
    cout << "|15. Mcm n numeri                            |\n";
    cout << "|16. Calcolo somma tra due numeri fratti     |\n";
    cout << "|17. Media aritmetica di n numeri arrotondata|\n";
    cout << "|                                            |\n";
    cout << "|     Inserisci che programma vuoi usare     |\n";
    cout << "|--------------------------------------------|\n";
    return 1;
}


int main()
{
    setlocale(LC_ALL, "italian");
    bool np;
    int caso;
    grafica();
    cin >> caso;
    switch (caso) {
    case 1:
        int a, b;
        cout << "Inserire il primo numero";
        cin >> a;
        cout << "Inserire il secondo numero";
        cin >> b;
        cout << "Mcm tra i due numeri è " << mcm(a, b);
        break;
    case 2:
        int x, y;
        cout << "Inserire il primo numero";
        cin >> x;
        cout << "Inserire il secondo numero";
        cin >> y;
        cout << "Mcd tra i due numeri è " << mcd(x, y);
        break;
    case 3:
        quadrato();
        break;
    case 4:
        float R;
        cout << "Inserisci un numero , max 34" << "\n";
        cin >> R;
        cout << "Fattoriale di "<< R << " è " << fattorialeR(R);
        break;
    case 5:
        fibonacci();
        break;
    case 6:
        nAmicabili();
        break;
    case 7:
        MaxMin();
        break;
    case 8:
        media();
        break;
    case 9:
        nPerfetto();
        break;
    case 10:
        int n;

        cout << "inserire un numero";
        cin >> n;
        np = nPrimo(n);
        if (np == true) {
            cout << "Il numero è primo";
        }
        else {
            cout << "Il numero non è primo";
        }
        break;
    case 11:
        nPrimominore();
        break;
    case 12:
        mcm3n();
        break;
    case 13:
        mcd3n();
        break;
    case 14:
        mcdn();
        break;
    case 15:
        mcmn();
        break;
    case 16:
        sommaFratti();
        break;
    case 17:
        mediaArrotondata();
        break;
    }
}
