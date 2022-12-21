#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, aux, p;
    string s;
    vector<char> v1;
    vector<char> v2;

    cin >> n;
    cin.ignore();

    while(n){

        v1.clear();
        v2.clear();

        getline(cin, s);

        for(char i : s){
            if((i>=65 && i<=90) || (i>=97 && i<=122)){
                aux=i+3;
            }else{
                aux=i;
            }
            
            v1.push_back(char(aux));
        }

        reverse(v1.begin(), v1.end());

        for(int i=0 ; i<v1.size() ; i++){
            if(i>=(v1.size()/2)){
                aux = v1[i]-1;
            }else{
                aux=v1[i];
            }
            v2.push_back(char(aux));
        }

        for(char i : v2){
            cout << i;
        }
        cout << endl;

        n--;
    }


    return 0;
}

// 65 - 90 
// 97 - 122