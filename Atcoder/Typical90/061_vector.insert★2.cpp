#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

int main() {
    int Q, t, x;
    vector<int> yama;
    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> t >> x;
        if(t==1){
            yama.insert(yama.begin(),x);
        }
        else if(t==2){
            yama.push_back(x);
        }
        else{
            cout << yama[x-1] << endl;
        }
    }
    return 0;
}// Created by satos on 2023/05/26.
//
