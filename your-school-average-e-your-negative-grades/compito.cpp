#include<iostream>  
using namespace std;

#define MAX 20

typedef struct{
    string name;
    int age;
    int list[MAX];
    int negative[MAX];
    int grades;
    int endign;
}list; 

int add(list *nl, int n, int max){
    if(n<=5){
        nl->negative[nl->grades]=n;
    }else{
        nl->negative[nl->grades]=0;
    }
    if(nl->grades + 1 > max){
        return 0;
    }
    nl->list[nl->grades] = n;
    nl->grades++;
    return 1; 
}

int print(list nl){
    int i, temp = 0;
    double fin, media = 0;
    cout<<"\nyour negative grades are: ";
    for(i = 0; i < nl.grades; i++){
        if (nl.negative[i]!=0){
            cout<<"\n"<<i+1<<") "<<nl.negative[i];
            temp = temp+1;
        }
        media = media + nl.list[i];
    }
    cout<<"\nwhit a total of "<<temp<<" negative grades";
    cout<<"\n\nyour school average is: "<< media/i;

}

int main( ){
    int temp;
    list nl;
    nl.grades = 0;
    int num;
    cout<<"how many grades does the student have: ";
    cin>>num;
    for(int i = 0; i < num; i++)
    {
        cout<< "put your grade in: ";
        cin>>temp;
        add(&nl, temp, num);
    }
    print(nl);
    return 0; 
    
