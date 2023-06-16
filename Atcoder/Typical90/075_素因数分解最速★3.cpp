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
    ll n;
    cin >> n;
    ll ans=0;
    while(n%2==0){
        ans++;
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2){
        while(n%i==0){
            ans++;
            n/=i;
        }
    }
    if(n>2) ans++;
    for(int i=0;i<100;i++){
        if((1<<i)>=ans){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
//
// Created by satos on 2023/06/16.
//
