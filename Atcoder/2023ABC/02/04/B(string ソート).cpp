#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    string s[K];
    for(int i=0;i<K;i++){
        cin >> s[i];
    }
    string tmp;
    for (int i = 0; i < K-1; ++i) {
        for (int j = 0; j < K-1; ++j) {
            if (s[j] > s[j+1]) {
                tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < K; ++i) {
        cout << s[i] << endl;
    }
    return 0;
}

//
// Created by satos on 2023/02/04.
//
