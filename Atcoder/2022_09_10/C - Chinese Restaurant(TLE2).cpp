#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, goodflag=0, max=0;
    cin >> N;
    int dish[N];
    for(int i=0;i<N;i++){
        cin >> dish[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(dish[(j-1+i)%N]==j||dish[(j+i)%N]==j||dish[(j+1+i)%N]==j){
                goodflag++;
            }
        }
        if(goodflag>max){
            max=goodflag;
        }
        goodflag=0;
    }
    cout << max << endl;
    return 0;
}
