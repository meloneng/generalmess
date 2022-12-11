#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, i=1;

    cin >> a;

    while(a!=0){

        for(int j=0 ; j<4 ; j++){
            if((i%4) == 0){
                cout << "PUM" << endl;
            }else{
                cout << i << " ";
            }
            i++;
        }

        a--;
    }

    return 0;
}