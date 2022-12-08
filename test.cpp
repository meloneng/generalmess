#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double a, b, x;

    cin >> n;

    while(n!=0){
        
        cin >> a >> b;

        if(b==0){
            cout << "divisao impossivel" << endl;
            n--;
        }else{
            x = a/b;
            cout << fixed << setprecision(1) << x << endl;
            n--;
        }        
    }
    
    return 0;
}