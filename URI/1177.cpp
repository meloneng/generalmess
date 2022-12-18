#include <bits/stdc++.h>

using namespace std;

void cheatFunc(int a){
    for(int i=0, j=0; i<1000 ; i++, j++){
        if(j>=a)
            j=0;
        
        cout << "N[" << i << "] = " << j << endl;

    }
}

void vectorFunc(int a){

    vector<int> n;
    int aux=0;
    for(int i=0, j=0 ; i<1000 ; i++, j++){
        if(j>=a)
            j=0;

        n.push_back(j);
    }

    for(auto i : n){
        cout << "N[" << aux << "] = " << i << endl;
        aux++;
    }
}

int main(){

    int a;

    cin >> a;

    vectorFunc(a);

    return 0;
}