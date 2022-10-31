#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    char box[H][W];
    int ans[W]={0};
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> box[i][j];
            if(box[i][j]=='#'){
                ans[j]++;
            }
        }
    }
    for(int i=0;i<W;i++){
        cout << ans[i] << endl;
    }
    return 0;
}

