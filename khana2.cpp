#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c, d;
    a=7,5; b=8; c=3,5; d=10;
    float average = (a+b+c+d)/4;
    float av,bv,cv,dv;
    av=pow((a-average),2);bv=pow((b-average),2);cv=pow((c-average),2);dv=pow((d-average),2);
    float sum = av+bv+cv+dv;
    float div = sum/4;
    float sqrtT = sqrt(div);

    cout << sqrtT << endl;

    return 0;
}