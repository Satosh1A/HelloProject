#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, max=1, maxh=0;
    cin >> N;
    int H[N];
    for(int i=0;i<N;i++){
        cin >> H[i];
        if(H[i]>maxh){
            maxh=H[i];
            max=i+1;
        }
    }
    cout << max << endl;
    return 0;
}

