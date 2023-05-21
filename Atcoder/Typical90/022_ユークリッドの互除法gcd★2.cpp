#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

ll gcd(ll a,ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll gcd(ll a, ll b, ll c){
    return gcd(gcd(a, b), c);
}

int main() {
    ll A, B, C, temp;
    cin >> A >> B >> C;
    temp = gcd(A,B,C);
    cout << A/temp+B/temp+C/temp-3 << endl;
    return 0;
}//
// Created by satos on 2023/05/21.
//
