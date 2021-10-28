#include <iostream>

using namespace std;

int main()
{
    int anno, m, c, d;
    do {
        cout << "Inserisci un anno minore di 3000" << endl;
        cin >> anno;
    } while (anno < 0 || anno >= 3000);
    m=anno/1000;
    if (m==2)
        cout << "MM";
    else if (m==1)
        cout << "M";
    anno=anno%1000;
    c=anno/100;
    switch (c) {
    case 1:
        cout << "C";
        break;
    case 2:
        cout << "CC";
        break;
    case 3:
        cout << "CCC";
        break;
    case 4:
        cout << "CD";
        break;
    case 5:
        cout << "D";
        break;
    case 6:
        cout << "DC";
        break;
    case 7:
        cout << "DCC";
        break;
    case 8:
        cout << "DCCC";
        break;
    case 9:
        cout << "CM";
        break;
    }
    anno=anno%100;
    d=anno/10;
    switch (d) {
    case 1:
        cout << "X";
        break;
    case 2:
        cout << "XX";
        break;
    case 3:
        cout << "XXX";
        break;
    case 4:
        cout << "XL";
        break;
    case 5:
        cout << "L";
        break;
    case 6:
        cout << "LX";
        break;
    case 7:
        cout << "LXX";
        break;
    case 8:
        cout << "LXXX";
        break;
    case 9:
        cout << "XC";
        break;
    }
    anno=anno%10;
    switch (anno) {
    case 1:
        cout << "I";
        break;
    case 2:
        cout << "II";
        break;
    case 3:
        cout << "III";
        break;
    case 4:
        cout << "IV";
        break;
    case 5:
        cout << "V";
        break;
    case 6:
        cout << "VI";
        break;
    case 7:
        cout << "VII";
        break;
    case 8:
        cout << "VIII";
        break;
    case 9:
        cout << "IX";
        break;
    }
    return 0;
}
