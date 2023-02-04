#include <bits/stdc++.h>

using namespace std;

int main(){
    int box[5], buf, count=1;
    for(int i=0;i<5;i++){
        cin >> box[i];
    }
    for(int i=0;i<4;i++){//バブルソートで大きい順に
        for(int j=i+1;j<5;j++){
            if(box[i]<box[j]){
                buf=box[i];
                box[i]=box[j];
                box[j]=buf;
            }
        }
    }
    for(int i=0;i<4;i++){//餅のサイズの種類を数える
        if(box[i]>box[i+1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
