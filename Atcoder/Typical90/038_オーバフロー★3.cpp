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

ll gcd(ll s,ll t){
    if(t==0) return s;
    else return gcd(t,s%t);
}

int main() {
    ll a,b;
    cin >> a >> b;
    ll c = a/gcd(a,b);
    if(1000000000000000000LL/c>=b) cout << c*b << endl;
    else cout << "Large" << endl;
    return 0;
}
//
// Created by satos on 2023/06/10.
//
