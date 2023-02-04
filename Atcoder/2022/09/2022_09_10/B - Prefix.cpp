#include <bits/stdc++.h>

using namespace std;

int main(){
    string S, T, x = "Yes";
    cin >> S >> T;
    for(int i=0;i<S.size();i++){
        if(S[i]!=T[i]){
            x = "No";
        }
    }
    cout << x << endl;
}
