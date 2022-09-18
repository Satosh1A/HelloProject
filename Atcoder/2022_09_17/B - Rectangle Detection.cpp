#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, A, B ,C, D, flag=0;
    string S[10];
    for(i=0;i<10;i++) cin >> S[i];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(S[i][j]=='#'){
                A=i+1;
                C=j+1;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(S[i][j]=='#'){
                B=i+1;
                D=j+1;
            }
        }
    }
    cout << A << " " << B << endl;
    cout << C << " " << D << endl;
    return 0;
}
