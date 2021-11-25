#include <iostream>
#include <string>
using namespace std;

int square(){
    cout << "how many: ";
    int x, i, y;
    cin >> x;
    for (i = 0; i<x; ++i){
        for ( y = 0; y<x; y++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
int triangle(){
    cout << "how many: ";
    int x, i, y, z;
    cin >> x;
    for (i = 0; i<x; ++i){
        for ( y = 0; y<x; y++){
            if (y <= i){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}
int reversed_triangle(){
    int x, i, y, z;
    cout << "how many: ";
    cin >> x;
    for (i = 0; i<x; ++i){
        for ( y = 0; y<x; y++){
            if (y >= i){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}
int strange_square(){
    cout << "how many: ";
    int x, i, y, z;
    string a;
    a = " ";
    cin >> x;
    for (i = 0; i<x; ++i){
        for (z = 0; z < i; z++){
            cout << a;
        }
        for ( y = 0; y<x; y++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
int menu(){
    int opzione;
    cout << "options:\n[1]for square\n[2]for triangle\n[3]same triangle just reversed\n[4]for a paralelopiped\n";
    cin >> opzione;
    switch (opzione)
    {
    case 1:
        square();
        break;
    case 2:
        triangle();
        break;
    case 3:
        reversed_triangle();
        break;
    case 4:
        strange_square();
        break;
    default:
        cout <<"try again :(\a\n";
        menu();
        break;
    }
    return 0;
}


int main(){
    menu();
    string run;
    while (true){
        cout << "run again? [y/n]: ";
        cin >> run;
        if (run == "y"){
            menu();
        }else{
            break;
        }
    }
    return 0;
}