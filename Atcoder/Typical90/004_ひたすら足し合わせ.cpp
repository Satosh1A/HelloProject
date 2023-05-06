#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
    int H, W;
    cin >> H >> W;
    int A[H][W],B[H][W];
    int row[H],column[W];
    for(int i=0;i<H;i++){
        row[i]=0;
        for(int j=0;j<W;j++){
            column[j]=0;
            cin >> A[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            row[i]+=A[i][j];
            column[j]+=A[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            B[i][j]=row[i]+column[j]-A[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << B[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}//
// Created by satos on 2023/05/06.
//
