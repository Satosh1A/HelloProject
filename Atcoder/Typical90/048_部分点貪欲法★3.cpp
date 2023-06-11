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
    int n,k;
    cin >> n >> k;
    ll ans = 0;
    vector<ll> vec;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        vec.push_back(b);
        vec.push_back(a-b);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    for(int i=0;i<k;i++) ans+=vec[i];
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2023/06/11.
//
