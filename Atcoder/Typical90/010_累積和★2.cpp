#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P1, P2;
    P1.push_back(0);
    P2.push_back(0);
    for(int i=1;i<=N;i++){
        int C, P;
        cin >> C >> P;
        if(C==1){
            P1.push_back(P1[i-1]+P);
            P2.push_back(P2[i-1]);
        }
        else{
            P1.push_back(P1[i-1]);
            P2.push_back(P2[i-1]+P);
        }
    }
    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        int L, R, sum1, sum2;
        cin >> L >> R;
        sum1 = P1[R] - P1[L-1];
        sum2 = P2[R] - P2[L-1];
        cout << sum1 << " " << sum2 << endl;
    }
    return 0;
}//
// Created by satos on 2023/05/20.
//
