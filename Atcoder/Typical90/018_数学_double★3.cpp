#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>
#include <map>
#include <algorithm>

typedef long long ll;

using namespace std;



int main() {
    double T,L,X,Y;
    int q;
    cin >> T >> L >> X >> Y >> q;
    for(int i=0;i<q;i++){
        double e,y,z,ans;
        cin >> e;
        y=-L/2*sin(2*M_PI*e/T);
        z=L/2*(1-cos(2*M_PI*e/T));
        ans=asin(z/sqrt(X*X+(Y-y)*(Y-y)+z*z));
        printf("%3.12f\n",ans*180/M_PI);
    }
    return 0;
}
//
// Created by satos on 2023/06/05.
//
