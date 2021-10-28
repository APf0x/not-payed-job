#include<iostream>
#include<string>
using namespace std;
 
void decimal2roman(int num){
    int numbers[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"}; 
    int letter = 0;
 
    while(num){
        while(num/numbers[letter]){
            cout<<symbol[letter];
            num -= numbers[letter];
        }
        letter++;
    }
}
 
int main(){
    int x;
    cout << "put in input the number you want to convert in roman numbers: ";
    cin >> x;
    cout << "\nthe number in roman numbers is: "; 
    decimal2roman(x);
    cout << "\n";
    return 0;
}