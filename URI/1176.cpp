#include <bits/stdc++.h>

using namespace std;


long long fib(int n){
    vector<long long> v;

    v.push_back(0);
    v.push_back(1);

    for(int i=2 ; i<n+1 ; i++){
        v.push_back((v[i-1] + v[i-2]));
    }

    for(auto i : v){
        cerr << i << endl;
    }

    return v[n];
}


int main(){

    int t, n;

    cin >> t;

    while(t){

        cin >> n;

        cout << "Fib(" << n << ") = " << fib(n) << endl;

        t--;
    }

    return 0;
}