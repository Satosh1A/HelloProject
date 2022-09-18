#include <bits/stdc++.h>

using namespace std;

int main(){
    int i=0, flag=1;
    string S;
    cin >> S;
    while(i<S.size()){
        if(S.substr(i,5)=="dream"){
            i+=5;
            if(S[i]=='e'&&S[i+2]!='a') i+=2;
        }
        else if(S.substr(i,5)=="erase"){
            i+=5;
            if(S[i]=='r') i+=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
