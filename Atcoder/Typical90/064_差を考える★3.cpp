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
    int n,q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<ll> sa(n+1);
    for(int i=1;i<n;i++){
        sa[i]=a[i]-a[i-1];
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        ans+=abs(sa[i]);
    }
    for(int i=0;i<q;i++){
        int l,r,v;
        cin >> l >> r >> v;
        if(l>1)ans-=abs(sa[l-1]);
        sa[l-1]+=v;
        if(l>1)ans+=abs(sa[l-1]);
        if(r<n)ans-=abs(sa[r]);
        sa[r]-=v;
        if(r<n)ans+=abs(sa[r]);
        cout << ans << endl;
    }
    return 0;
}
//
// Created by satos on 2023/06/14.
//
