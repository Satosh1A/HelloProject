#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i, buf, count=1;
    cin >> N;
    int mochi[N];
    for(i=0;i<N;i++){
        cin >> mochi[i];
    }
    for(i=0;i<N-1;i++){//バブルソートで大きい順に
        for(int j=i+1;j<N;j++){
            if(mochi[i]<mochi[j]){
                buf=mochi[i];
                mochi[i]=mochi[j];
                mochi[j]=buf;
            }
        }
    }
    for(i=0;i<N-1;i++){//餅のサイズの種類を数える
        if(mochi[i]>mochi[i+1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
