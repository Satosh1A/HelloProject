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
    vector<int> a(300005), cnt(100000);
    cin >> n;
    for(int i=0;i<3*n;i++){
        cin >> a[i];
    }
    for(int i=0;i<3*n;i++){
        if(cnt[a[i]]==0) cnt[a[i]]++;
        else if(cnt[a[i]]==1){
            cout << a[i] << " ";
            cnt[a[i]]++;
        }
    }
    cout << endl;
    return 0;
}
//
// Created by satos on 2023/06/19.
//
