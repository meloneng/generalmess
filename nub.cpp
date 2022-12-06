#include <bits/stdc++.h>
using namespace std;

int main (){

    double inTheBank = 10000;
    double aporteAnual = 8000;
    double taxaAnual = 1.1364;

    for (int i=0 ; i < 25 ; i++){
        inTheBank *= taxaAnual;
        inTheBank += aporteAnual;
        cout << fixed << setprecision(2) << "Ano: " << i << "\nValor no banco: " << inTheBank
            << "\n\n" << endl;
    }

    cout << fixed << setprecision(2) << "Resulado final depois de 25 anos: " << inTheBank << endl;

    return 0;
}