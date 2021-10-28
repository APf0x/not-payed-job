#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int x, z;
    z = 0;
    string compliment[6] = {"how can you be so smart!!!", ":)", "im happy for your sucess", "you did it youre awesome!!!", "wow i always belived in you"};
    string insult[6] = {"just give up", "you're never gonna make it", "you're just not good enought", "you gave it all you got nice try", "lol you failed"};
    srand(time(NULL));
    int y = rand()%100 + 1;
    while (true){
        z++;
        cout << "put in input what you think the number is: ";
        cin >> x;
        if (x < y){
            cout <<"the number that you put in input is lower than the randomly generated number "<< insult[rand()%5] << "\n";
        }else if (x > y){
            cout <<"the number that you put in input is higher that the number generated randomly "<< insult[rand()%5] << "\n";
        }else{
            cout <<"bravo you guessed right the random hidden number was "<< y <<" congratulations " << compliment[rand()%6] << "\n";
            cout << "it took you only " << z << " tries you must be a special "<< "\xF0\x9F\x98\x8A \n";
            break;
        }
    }
}
