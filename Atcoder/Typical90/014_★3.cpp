#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

typedef long long ll;

using namespace std;

int main() {
    ll N, ans=0;
    cin >> N;
    vector<ll> A(N), B(N);
    for(ll i=0;i<N;i++){
        cin >> A[i];
    }
    for(ll i=0;i<N;i++){
        cin >> B[i];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(ll i=0;i<N;i++){
        ans += abs(A[i]-B[i]);
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2023/06/02.
//
