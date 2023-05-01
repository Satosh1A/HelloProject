#include <iostream>
#include <string>
#include <deque>
#define ll long long
using namespace std;

const int MOD = 998244353;

ll K,L,N;
ll A[2 << 18];

bool solve(ll M){
    ll cnt=0,pre=0;
    for(int i=0;i<N;i++){
        if(A[i]-pre>=M && L-A[i]>=M){
            pre=A[i];
            cnt++;
        }
    }
    if(cnt>=K){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cin >> N >> L >> K;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    ll left=-1,right=L+1;
    while(right-left>1){
        ll mid = left + (right-left)/2;
        if(solve(mid)==false){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout << left << endl;
    return 0;
}
//
// Created by satos on 2023/05/02.
//
