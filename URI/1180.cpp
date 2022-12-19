#include <bits/stdc++.h>

using namespace std;


int main(){

    int n;

    cin >> n;
    
    
    // Não usando vector
    int a, aux, pos, t = n;

    cin >> a;
    aux = a;
    pos = t-n;
    n--;

    //posicao no vetor = abs(n-n_atual) | abs(t-n)

    while(n){
        cin >> a;        
        if(a<aux){
            aux = a;
            pos = t-n;
        }
        n--;
    }
    

    /*
    //Usando vector
    vector<int> v;
    int a, aux, pos;

    while(n){
        cin >> a;
        v.push_back(a);
        n--;
    }

    pos=0;
    aux=v[0];

    for(int i=0 ; i<v.size() ; i++){
        if(v[i] < aux){
            aux = v[i];
            pos = i;
        }
    }
    */

    cout << "Menor valor: " << aux << endl << "Posicao: " << pos << endl;

    return 0;
}