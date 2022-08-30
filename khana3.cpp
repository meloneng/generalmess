#include <bits/stdc++.h>
using namespace std;

int main (){

    string coin[2] = {"head", "tails"};
    int score1=0;
    int score2=0;
    srand(time(0));

    for (int i=0; i<3; i++){
        int r = rand() % 2;
        int v = rand() % 2;
        cout << (i+1) << ": " << coin[r] << " and " << coin[v] << endl;
        if(r==v){
            score1++;
        }else score2++;
    }

    cout << endl << "score1: " << score1 << endl << "score2: " << score2 << endl;

    return 0;
}