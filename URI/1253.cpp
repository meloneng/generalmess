#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, a, aux;
    string s;
    vector<char> v;

    cin >> n;

    while(n){

        cin >> s >> a;

        for(int i=0 ; i<s.size() ; i++){
            aux = s[i] - a;
            if(aux<65){
                aux = aux + 26;
            }
            //cerr << char(aux) << endl;;
            v.push_back(char(aux));
        }

        for(int i=0 ; i<v.size() ; i++){
            cout << v[i];
        }

        v.clear();

        cout << endl;
        n--;
    }

    return 0;
}

