#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, Y, a, b, c, flag=0;
    cin >> N >> Y;
    for(a=0;a<=N;a++){
        for(b=0;b<=N-a;b++){
            c=N-a-b;
            if(a*10000+b*5000+c*1000==Y){
                cout << a << " " << b << " " << c << endl;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout << "-1 -1 -1" << endl;
    }
    return 0;
}
