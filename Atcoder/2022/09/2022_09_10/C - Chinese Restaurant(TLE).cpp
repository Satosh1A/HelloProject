#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, goodflag=0, max=0, buf[2];
    cin >> N;
    int dish[N];
    for(int i=0;i<N;i++){
        cin >> dish[i];
    }
    for(int i=0;i<N;i++){//N回試す
        for(int j=0;j<N;j++){
            if(j==0){
                if(dish[N-1]==0||dish[0]==0||dish[1]==0) {
                    goodflag++;
                }
            }
            else{
                if(dish[j-1]==j||dish[j]==j||dish[(j+1)%N]==j) {
                    goodflag++;
                }
            }
        }
        if(goodflag>max){
            max=goodflag;
        }
        goodflag=0;
        for(int k=0;k<N;k++){//皿を一つずらす
            if(k==0){
                buf[0] = dish[1];
                dish[1] = dish[0];
            }
            else {
                buf[k%2] = dish[(k + 1) % N];
                dish[(k + 1) % N] = buf[(k+1)%2];
            }
        }
    }
    cout << max << endl;
    return 0;
}
