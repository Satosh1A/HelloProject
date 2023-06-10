#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>
#include <map>
#include <algorithm>
#include <deque>

typedef long long ll;

using namespace std;

int main() {
    int H,W;
    cin >> H >> W;
    char S[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> S[i][j];
        }
    }
    vector<int> tatesum(H,0);
    vector<int> yokosum(W,0);
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j]=='#'){
                tatesum[i]++;
                yokosum[j]++;
            }
        }
    }
    auto maxtatesum= max_element(tatesum.begin(),tatesum.end());
    auto maxyokosum= max_element(yokosum.begin(),yokosum.end());
    int maxx=*maxtatesum;
    int maxy=*maxyokosum;
    int ansx,ansy;
    for(int i=0;i<H;i++){
        if(tatesum[i]==maxx-1) ansx=i+1;
    }
    for(int i=0;i<W;i++){
        if(yokosum[i]==maxy-1) ansy=i+1;
    }
    cout << ansx << " " << ansy << endl;
    return 0;
}
//
// Created by satos on 2023/06/10.
//
