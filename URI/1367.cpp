#include <bits/stdc++.h>

using namespace std;


int main(){

    int a, time, s, p, aux1;
    char id, aux2;
    string julg;
    
    while(true){ 
        cin >> a;
        
        if(a == 0)
            break;
        
        s=0;
        p=0;
        aux1=0;
        aux2='a';

        while(a){
            cin >> id >> time >> julg;

            if(id != aux2){
                aux2=id;
                aux1=0;
            }

            if(julg == "correct"){
                s++;
                p+=(time + aux1);
            }else{
                aux1+=20;
            }

            a--;
        }

        cout << s << " " << p << endl;
    }

    return 0;
}