#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

typedef long long ll;

using namespace std;

int main() {
    int N,M,temp,tmp,ans=0;
    cin >> N >> M;
    vector<vector<int>> a(M+1);
    for(int i=1;i<=M;i++){
        cin >> temp >> tmp;
        a[temp-1].push_back(tmp-1);
        a[tmp-1].push_back(temp-1);
    }
    for(int i=0;i<N;i++){
        int cnt=0;
        for(int j: a[i]){
            if(j<i) cnt++;
        }
        if(cnt==1) ans++;
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2023/05/30.
//
