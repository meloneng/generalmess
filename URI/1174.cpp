#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<double> n;
    double a;

    for(int i=0 ; i<100 ; i++){
        cin >> a;
        n.push_back(a);
    }

    for(int i=0 ; i<100 ; i++){
        if(n[i] <= 10.0){
            cout << fixed << setprecision(1)<< "A[" << i << "] = " << n[i] << endl;
        }
    }

    return 0;
}