#include <iostream>
#include <string.h>
#include "conversione.h"
using namespace std;
typedef struct{
    string cesare;
}ces; 

int conversione(ces *ok, int x){
    for(int i = 0; i<ok->cesare.length(); i++){
        if(ok->cesare[i] == 'z'){
            ok->cesare[i] = ok->cesare[i]-23+x;
        }else{
            ok->cesare[i] = ok->cesare[i]+x;
        }
    }
    return 1;
}
int main(){
    ces ok;
    int n;
    cin>>n;
    cin>>ok.cesare;
    conversione(&ok, n);
    cout<<ok.cesare;
}