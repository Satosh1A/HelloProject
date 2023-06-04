#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>
#include <map>

typedef long long ll;

using namespace std;



int main() {
    int N;
    cin >> N;
    vector<pair<int,int>> p(N);
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        p.at(i) = make_pair(b,a);
    }
    sort(p.begin(),p.end());
    for(int i=0;i<N;i++){
        int a,b;
        tie(b,a)=p.at(i);
        cout << a << " " << b << endl;
    }
    return 0;
}
//
// Created by satos on 2023/06/04.
//
