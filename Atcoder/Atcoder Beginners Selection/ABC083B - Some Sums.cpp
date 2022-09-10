#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, A, B, sum=0, box;
    cin >> N >> A >> B;
    for(int i=1;i<=N;i++){
        box = i/10000+i%10000/1000+i%1000/100+i%100/10+i%10;//各桁の総和を求める
        if(box>=A&&box<=B){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
