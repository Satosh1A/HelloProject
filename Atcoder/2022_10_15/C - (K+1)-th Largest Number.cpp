#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, k=0, l=1, temp;
    cin >> N;
    int box[N], ans[N]={0};
    for(int i=0;i<N;i++){
        cin >> box[i];
    }
    size_t h = (N*10)/13;//コームソート(爆速)
    bool is_sorted = false;
    while(!is_sorted){
        if(h==1)is_sorted = true;
        for(size_t i=0; i<N-h; ++i){
            if(box[i]<box[i+h]){
                swap(box[i],box[i+h]);
                if(is_sorted)is_sorted = false;
            }
        }
        if(h>1) h = (h*10)/13;
        if(h==0) h = 1;
    }
    temp=box[0];
    for(int i=1;i<=N;i++){
        if(temp==box[i]){
            l++;
        }
        else{
            temp=box[i];
            ans[k]=l;
            l=1;
            k++;
        }
    }
    for(int i=0;i<N;i++){
        cout << ans[i] << endl;
    }
    return 0;
}

