#include <bits/stdc++.h>

using namespace std;

int main(){
    int H, W, buf=0;
    cin >> H >> W;
    string box[H];
    for(int i=0;i<H;i++) {
        cin >> box[i];
    }
    for(int i=0;i<H;i++) {
        for (int j=0; j<W; j++){
            buf=0;
            if(box[i][j]=='.'){
                if(box[i-1][j-1]=='#'){
                    buf++;
                }
                if(box[i-1][j]=='#') {
                    buf++;
                }
                if(box[i-1][j+1]=='#'){
                    buf++;
                }
                if(box[i][j-1]=='#'){
                    buf++;
                }
                if(box[i][j+1]=='#'){
                    buf++;
                }
                if(box[i+1][j-1]=='#'){
                    buf++;
                }
                if(box[i+1][j]=='#'){
                    buf++;
                }
                if(box[i+1][j+1]=='#'){
                    buf++;
                }
                box[i][j]=char('0'+buf);
            }
        }
    }
    for(int i=0;i<H;i++){
        cout << box[i] << endl;
    }
    return 0;
}
