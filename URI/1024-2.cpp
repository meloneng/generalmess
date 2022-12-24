#include <bits/stdc++.h>

using namespace std;


int main(){

    int n;
    string s;

    cin >> n;
    cin.ignore();

    while(n--){

        getline(cin, s);

        for(int i=0 ; i<s.size() ; i++){
            if(isalpha(s[i])){
                s[i] += 3;
            }
        }

        reverse(s.begin(), s.end());

        for(int i=(s.size()/2) ; i<s.size() ; i++){
            s[i] -= 1;
        }

        cout << s << endl;

    }

    return 0;
}

// 65 - 90 
// 97 - 122