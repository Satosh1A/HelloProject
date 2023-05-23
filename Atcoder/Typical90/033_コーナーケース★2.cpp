#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    if(H==1||W==1) cout << H*W << endl;
    else cout << (H+1)/2*((W+1)/2) << endl;
    return 0;
}//
// Created by satos on 2023/05/24.
//
