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

ll powmod(ll base,ll exponent,ll mod){
    ll result = 1;
    while(exponent>0){
        if(exponent%2==1){
            result = result*base%mod;
        }
        base=base*base%mod;
        exponent/=2;
    }
    return result;
}

int main() {
    ll n,k,ans,mod=1000000007;
    cin >> n >> k;
    if(n==1){
        ans=k%mod;
    }else if(n>=2&&k>=3){
        ans=((((k%mod)*(k-1))%mod)*powmod(k-2,n-2,mod))%mod;
    }else if (n==2&&k==2){
        ans=2;
    }else ans=0;
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2023/06/15.
//
