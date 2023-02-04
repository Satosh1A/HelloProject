#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=-1;
    string S;
    cin >> S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='a'){
            ans=i+1;
        }
    }
    cout << ans << endl;
    return 0;
}


