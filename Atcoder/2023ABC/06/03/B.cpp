#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

typedef long long ll;

using namespace std;

int main() {
    ll N;
    cin >> N;
    if(N<=1000-1){
        cout << N << endl;
    }
    else if(N>=1000&&N<=10000-1){
        cout << N/10*10 << endl;
    }
    else if(N>=10000&&N<=100000-1){
        cout << N/100*100 << endl;
    }
    else if(N>=100000&&N<=1000000-1){
        cout << N/1000*1000 << endl;
    }
    else if(N>=1000000&&N<=10000000-1){
        cout << N/10000*10000 << endl;
    }
    else if(N>=10000000&&N<=100000000-1){
        cout << N/100000*100000 << endl;
    }
    else{
        cout << N/1000000*1000000 << endl;
    }
    return 0;
}
//
// Created by satos on 2023/06/04.
//
