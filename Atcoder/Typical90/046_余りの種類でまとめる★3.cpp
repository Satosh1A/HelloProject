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
    ll ans=0;
    cin >> n;
    vector<ll> a(50,0),b(50,0),c(50,0);
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        a[j%46]++;
    }
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        b[j%46]++;
    }
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        c[j%46]++;
    }
    for(int i=0;i<46;i++){
        for(int j=0;j<46;j++){
            for(int k=0;k<46;k++){
                if((i+j+k)%46==0){
                    ans+=a[i]*b[j]*c[k];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2023/06/11.
//
