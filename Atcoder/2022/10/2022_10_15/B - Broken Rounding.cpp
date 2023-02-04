#include <bits/stdc++.h>

using namespace std;

int main(){
    long int X, K;
    cin >> X >> K;
    for(int i=0;i<K;i++){
        if(X%(long int)pow(10,i+1)>=5*pow(10,i)){
            X= X-X%(long int)pow(10,i+1)+pow(10,i+1);
        }
        else{
            X-=X%(long int)pow(10,i+1);
        }
    }
    cout << X << endl;
    return 0;
}

