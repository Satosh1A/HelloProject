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
    int N;
    cin >> N;
    vector<int> A(N),B(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    B[0]=0;
    B[1]=0;
    for(int i=2;i<N;i++){
        if(i%2==0){
            B[i]=B[i-1]+A[i]-A[i-1];
        }else{
            B[i]=B[i-1];
        }
    }
    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        int l,r,ans=0;
        cin >> l >> r;
        auto left= lower_bound(A.begin(),A.end(),l);
        auto right = lower_bound(A.begin(),A.end(),r);
        if(distance(A.begin(), left)%2==0) ans+=*left-l;
        if(distance(A.begin(), right)%2==0) ans+=r-*right;
        ans+=abs(B[distance(A.begin(), left)]-B[distance(A.begin(), right)]);
        cout << ans << endl;

    }
    return 0;
}
//
// Created by satos on 2023/06/10.
//
