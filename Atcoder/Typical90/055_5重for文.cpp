#include <vector>
#include <iostream>
using namespace std;
int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = 0; k < j; ++k) {
                for (int l = 0; l < k; ++l) {
                    for (int m = 0; m < l; ++m) {
                        if (1LL * A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q) {
                            ++ans;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}/*
 *for(int i=0;i<N-4;i++){
        for(int j=i+1;j<N-3;j++){
            for(int k=j+1;k<N-2;k++){
                for(int l=k+1;l<N-1;l++){
                    for(int m=l+1;m<N;m++){
                        if(((((A[i]*A[j])%P*A[k])%P*A[l])%P*A[m])%P==Q){
                            ans++;
                        }
                    }
                }
            }
        }
    }
    だとダメなのはなんで？
 */
// Created by satos on 2023/05/25.
//
