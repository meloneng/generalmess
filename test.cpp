#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, x;
    x=0;

    cin >> a >> b;

    if(a>b) swap(a,b);

    for(int i=a+1 ; i<b ; i++){
        if((i%2)){
            x+=i;
        }
    }

    cout << x << endl;

    return 0;
}