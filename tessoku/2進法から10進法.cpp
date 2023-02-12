#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    string N;
    int ans=0,tmp;
    cin >> N;
    for(int i=0;i<N.size();i++){
        tmp = 1 << (N.size()-i-1);
        if(N[i]=='1'){
            ans += tmp;
        }
    }
    cout << ans << endl;
    return 0;
}

//
// Created by satos on 2023/02/13.
//
