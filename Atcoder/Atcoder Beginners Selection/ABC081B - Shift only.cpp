#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, box[N], count=0;
    bool flag = true;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> box[i];
    }
    while(flag){
        for(int i=0;i<N;i++){
            if(box[i]%2==1){
                flag = false;
                break;
            }
            else{
                box[i]/=2;
            }
        }
        count++;
    }
    cout << count-1 << endl;
    return 0;
}
