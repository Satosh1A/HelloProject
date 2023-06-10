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
    cin >> n;
    if(n%5==0) cout << n << endl;
    if(n%5==1) cout << n-1 << endl;
    if(n%5==2) cout << n-2 << endl;
    if(n%5==3) cout << n+2 << endl;
    if(n%5==4) cout << n+1 << endl;
    return 0;
}
//
// Created by satos on 2023/06/10.
//
