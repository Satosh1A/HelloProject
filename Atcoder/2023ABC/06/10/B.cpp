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
    int n[7]={0,3,4,8,9,14,23};
    char p,q;
    cin >> p >> q;
    int i= p-'A';
    int j= q-'A';
    cout << abs(n[j]-n[i]) << endl;
    return 0;
}
//
// Created by satos on 2023/06/10.
//
