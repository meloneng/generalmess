#include <bits/stdc++.h>

using namespace std;


int main(){

    string s1, s2;
    int aux1, aux2;

        
    while(getline(cin,s1) && getline(cin,s2)){
        
        int n=0;

        for(int i=0 ; i<s1.size() ; i++){
            for(int j=0 ; j<s2.size() ; j++){
                if(s1[i] == s2[j]){
                    aux1 = i;
                    aux2 = j;
                    int aux3 = 0;
                    while((s1[aux1] == s2[aux2]) && (aux1<s1.size() && aux2<s2.size())){

                        aux1++;
                        aux2++;
                        aux3++;
                    }

                    if(aux3 > n)
                        n=aux3;
                }
            }
        }

        cout << n << endl;
    }

    return 0;
}

// 65 - 90 
// 97 - 122