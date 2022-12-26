#include <bits/stdc++.h>

using namespace std;


int main(){

    int a;
    
    while((cin >> a) && (a!=0)){ 
        
        int time , tTime=0, correct=0;
        char id;
        string julg;
        vector<int> penn(30, 0);
        
        while(a--){
            cin >> id >> time >> julg;

            if(julg == "correct"){
                correct++;
                tTime += time + penn[id - 'A'];
            }else{
                penn[id - 'A'] += 20;
            }
            
        }

        cout << correct << " " << tTime << endl;
    }

    return 0;
}