#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

typedef long long ll;

using namespace std;

int main() {
    ll N, minage = 1000000009,start, count=0;
    cin >> N;
    vector<string> S(N);
    vector<ll> A(N);

    for(ll i=0;i<N;i++){
        cin >> S[i] >> A[i];
    }
    for(ll i=0;i<N;i++){
        if(minage>A[i]){
            minage = A[i];
            start = i;
        }
    }
    while(count<N){
        cout << S[start] << endl;
        start++;
        count++;
        if(start>=N) start=0;

    }
    return 0;
}
//
// Created by satos on 2023/06/04.
//
