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
    ll n,a,b,c,max=(1ll<<30);
    cin >> n >> a >> b >> c;
    for(int i=0;i<=9999;i++){
        for(int j=0;j<=9999;j++){
            ll k=(n-a*i-b*j)/c;
            ll ans=i+j+k;
            if(k<0||ans>9999||(n-a*i-b*j)%c!=0) continue;
            max = min(ans,max);
        }
    }
    cout << max << endl;
    return 0;
}
//
// Created by satos on 2023/06/04.
//
