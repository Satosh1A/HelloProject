#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    double S = round((double)B/(double)A*1000)/1000;
    cout << fixed << setprecision(3) << S << endl;
    return 0;
}

