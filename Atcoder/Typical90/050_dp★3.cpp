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
    int n,l;
    ll modint = 1000000007;
    cin >> n >> l;
    vector<ll> dp(n+l+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        dp[i+1]=(dp[i+1]+dp[i])%modint;
        dp[i+l]=(dp[i+l]+dp[i])%modint;
    }
    cout << dp[n] << endl;
    return 0;
}
//
// Created by satos on 2023/06/12.
//
