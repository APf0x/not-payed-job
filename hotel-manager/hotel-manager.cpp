#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int floor, days_of_rest, pay_for_floor, pay_for_days;
    cout << "ok what floor the guest will sleep: ";
    cin >> floor;
    cout << "\nhow many days will the guest stay in the hotel: ";
    cin >> days_of_rest;
    switch (floor){
        case 1:
            pay_for_floor = 65;
            break;
        case 2:
            pay_for_floor = 75;
            break;
        case 3:
            pay_for_floor = 80;
            break;
        case 4:
            pay_for_floor = 85;
        default:
            cout << "looks like you have made a mistake there are 4 floors and you put something that is not a number of a floor (restart the programm.)";
            break;
    }
    cout << "\nlight you gotta pay "<< pay_for_floor*days_of_rest << " for "<< days_of_rest <<" days of rest at the "<< floor << " floor \n";
}
