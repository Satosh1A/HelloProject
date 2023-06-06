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
    ll a,b,c;
    cin >> a >> b >> c;
    ll temp=1;
    for(int i=0;i<b;i++){
        temp*=c;
    }
    if(a<temp) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2023/06/06.
//
