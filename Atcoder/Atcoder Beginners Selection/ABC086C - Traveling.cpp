#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, flag=1, box;
    cin >> N;
    int t[N+1], x[N+1], y[N+1];
    t[0]=0, x[0]=0, y[0]=0;
    for(int i=1;i<=N;i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    for(int i=0;i<N;i++){
        box = fabs((x[i+1]+y[i+1])-(x[i]+y[i]));
        if((box+(t[i+1]-t[i]))%2==0&&box<=(t[i+1]-t[i])){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
