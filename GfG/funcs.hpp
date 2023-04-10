#include<bits/stdc++.h>

using namespace std;


void firstOne(){

    int n;
    cin >> n;

    int sum=0;

    for(int i=0; i<(n+1) ; i++){
        sum += i;
    }

    cout << sum << endl;
}


void numberOf(){

    int n, x=1;

    cin >> n;

    while(true){
        if(9<(n)){
            n = n/10;
            x++;
        }else break;
    }

    cout << x << endl;
    
}


void reverse(){
    int n,rev=0;
    cin >> n;
    int aux = n;

    while(n>0){
        int dig = n%10;
        rev = rev*10 + dig;
        n = n/10;
    }

    cout << rev << endl;

    if(aux == rev){
        cout << true << endl;
    }else cout << false << endl;

}


void factorial(){
    int n,x=1;
    cin >> n;

    while(n!=0){
        x = x*n;
        n--;
    }

    cout << x << endl;
}
int factorialR(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorialR(n-1);
    }
}


