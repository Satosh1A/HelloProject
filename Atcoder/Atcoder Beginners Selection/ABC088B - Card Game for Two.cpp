#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i, buf, Asum=0, Bsum=0;
    cin >> N;
    int card[N];
    for(i=0;i<N;i++){
        cin >> card[i];
    }
    for(i=0;i<N-1;i++){//バブルソートで大きい順に
        for(int j=i+1;j<N;j++){
            if(card[i]<card[j]){
                buf=card[i];
                card[i]=card[j];
                card[j]=buf;
            }
        }
    }
    for(i=0;i<N;i+=2){
        Asum+=card[i];
    }
    for(i=1;i<N;i+=2){
        Bsum+=card[i];
    }
    cout << Asum-Bsum << endl;
    return 0;
}
