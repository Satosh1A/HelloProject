#include <bits/stdc++.h>

using namespace std;

int main(){
    int count=0;
    char box[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> box[i][j];
        }
    }
    for(int x=1;x<=8;x++){//斜め正方形の数
        for(int y=1;y<=9-x;y++){
            for(int a=0;a<=9-x-1;a++){
                for(int b=y;b<=9-x-1;b++){
                    if(box[a][b]=='#'&&box[a+x][b-y]=='#'&&box[a+x+y][b-y+x]=='#'&&box[a+y][b+x]=='#'){
                        count++;
                    }
                }
            }
        }
    }
    for(int x=1;x<=9;x++){//シンプル正方形の数
        for(int a=0;a<=9-x-1;a++){
            for(int b=0;b<=9-x-1;b++){
                if(box[a][b]=='#'&&box[a+x][b]=='#'&&box[a][b+x]=='#'&&box[a+x][b+x]=='#'){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}

