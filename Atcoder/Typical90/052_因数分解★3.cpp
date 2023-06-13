#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>
#include <map>
#include <algorithm>
#include <deque>

typedef long long ll;

using namespace std;

int main() {
    int n;
    ll ans=1;
    ll modint = 1000000007;
    cin >> n;
    vector<ll> sum(n);
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<6;j++){
            int x;
            cin >> x;
            temp+=x;
        }
        sum[i]=temp;
    }
    for(int i=0;i<n;i++){
        ans = (ans*sum[i])%modint;
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2023/06/13.
//
