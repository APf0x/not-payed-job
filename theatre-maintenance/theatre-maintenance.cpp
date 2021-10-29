#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
    const int platea = 40;
    const int galleria = 30;
    int posti_platea_rimasti, prezzotot, posti_galleria_rimasti, opzioni, posti, da_pagare, giorni, da_reimborsare, posti_galleria_totali, posti_platea_totali;
    prezzotot = 0;
    da_pagare = 0;
    cout << "posti platea: ";
    cin >> posti_platea_rimasti;
    cout << "posti galleria: ";
    cin >> posti_galleria_rimasti;
    posti_platea_totali = posti_platea_rimasti;
    posti_galleria_totali = posti_galleria_rimasti;
    while (true){
        cout << "\n1. Acquisto \n2. Restituzione \n3. Totale incasso \n0. Esci \n";   
        cin >> opzioni;
        switch (opzioni){
            case 1:
                cout << "\n0=platea \n1=galleria\n";
                cin >> opzioni;
                if (opzioni == 1){
                    cout << "quanti posti?: ";
                    cin >> posti;
                    if(posti_galleria_rimasti >= posti){
                        prezzotot = prezzotot + galleria*posti;
                        da_pagare = galleria * posti;
                        posti_galleria_rimasti = posti_galleria_rimasti - posti;
                        cout << da_pagare << " euro da pagare e " << posti_galleria_rimasti << " posti rimasti in galleria.\n";
                    }else{
                        cout << "non ci sono posti disponibili \n";
                    }
                }else if( opzioni == 0){
                    cout << "quanti posti?: ";
                    cin >> posti;
                    if(posti_platea_rimasti >= posti){
                        prezzotot = prezzotot + platea*posti;
                        da_pagare = platea * posti;
                        posti_platea_rimasti = posti_platea_rimasti - posti;
                        cout << da_pagare << " euro da pagare e " << posti_platea_rimasti << " posti rimasti in platea.\n";
                    }else{
                        cout << "non ci sono posti disponibili \n";
                    }
                }else{
                    cout << "hai messo in input l'opzione sbagliata \nrestarting programm...\n";
                    break;
                }
                break;
            case 2:
                //case 2 reimborso stai lavorando qui non dimenticarti coglione che sei qui 5 ore------------------------------------------------
                cout << "in quanti giorni di anticipo hai comprato i biglietti?; \n";
                cin >> giorni;
                cout << "\nper dove li hai comprati \n0=platea \n1=galleria\n";
                cin >> opzioni;
                cout << "quanti posti da reimborsare?: ";
                cin >> da_reimborsare;
                if (opzioni == 1){
                    if (da_reimborsare <= posti_galleria_totali-posti_galleria_rimasti){
                        posti_galleria_rimasti = posti_galleria_rimasti + da_reimborsare;
                        if (giorni < 15 && giorni >= 1){
                            prezzotot = prezzotot-da_reimborsare*galleria/2;
                            cout << "hai ricevuto indietro il 50% ovvero "<< (da_reimborsare*galleria)/2 << "euro\n";
                        }
                        else{
                            prezzotot = prezzotot-da_reimborsare*galleria;
                            cout << "hai ricevuto indietro i tuoi "<< da_reimborsare*galleria << "euro\n";
                        }  
                    }
                    else{
                        cout << "mi pare che tu stia cercando di fregarmi è il cio non mi piace.\nauto spegnimento...\n";
                        return 0;
                    }
                }else if (opzioni == 0){
                    if (da_reimborsare <= posti_platea_totali-posti_platea_rimasti){
                        posti_platea_rimasti = posti_platea_rimasti + da_reimborsare;
                        if (giorni < 15 && giorni >= 1){
                            prezzotot = prezzotot-da_reimborsare*platea/2;
                            cout << "hai ricevuto indietro il 50% ovvero "<< (da_reimborsare*platea)/2 << "euro\n";
                        }
                        else{
                            prezzotot = prezzotot-da_reimborsare*platea;
                            cout << "hai ricevuto indietro i tuoi "<< da_reimborsare*platea << "euro\n";
                        }  
                    }
                    else{
                        cout << "mi pare che tu stia cercando di fregarmi è il cio non mi piace.\nauto spegnimento...\n";
                        return 0;
                    }
                }else{
                    cout << "credo tu abbia messo un opzione non esistente...\n";
                }
                break;
            case 3:
                cout << "l'incasso totale per oggi e di "<< prezzotot << " euro\n";
                cout << "e i posti liberi sono " << posti_platea_rimasti << " nella platea e "<< posti_galleria_rimasti << " in galleria\n";
                break;
            case 0:
                cout << "arivederci...\n";
                return 0;
            default:
                cout << "you put in input somethink that is not in the given list try again.\n";
                break;
        }
    }  
}