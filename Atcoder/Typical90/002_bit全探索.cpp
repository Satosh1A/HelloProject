#include <iostream>
#include <string>
#include <deque>
#define ll long long
using namespace std;

const int MOD = 998244353;

int N;

bool hantei(string S){
    int temp=0;
    for(int i=0;i<N;i++){
        if(S[i]=='(') temp++;
        if(S[i]==')') temp--;
        if(temp<=-1) return false;
    }
    if(temp==0) return true;
    else return false;
}

int main() {
    cin >> N;
    for(int i=0;i<(1<<N);i++){
        string S="";
        for(int j=N-1;j>=0;j--){
            if((i&(1<<j))==0){
                S += '(';
            }
            else{
                S += ')';
            }
        }
        bool I = hantei(S);
        if(I == true) cout << S << endl;
    }
    return 0;
}
//
// Created by satos on 2023/05/02.
//
