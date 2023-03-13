#include<bits/stdc++.h>

using namespace std;

int firstOne(int n){

    int sum=0;

    for(int i=0; i<(n+1) ; i++){
        sum += i;
    }

    return sum;
}


int main(){

    int n;

    cin >> n;

    int sum1 = firstOne(n);
    cout << "firstOne = " << sum1 << endl;

    return 0;
}
