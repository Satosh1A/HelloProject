#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

int main() {
    int N, K, ans=0;
    cin >> N >> K;
    int A[N], B[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cin >> B[i];
    }
    for(int i=0;i<N;i++){
        ans += abs(A[i]-B[i]);
        if(ans > K){
            cout << "No" << endl;
            return 0;
        }
    }
    if(ans <= K && ans%2 == K%2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}//
// Created by satos on 2023/05/22.
//
