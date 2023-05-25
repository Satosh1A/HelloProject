#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

int main() {
    int N, P, Q, ans=0;
    vector<int> A(N);
    cin >> N >> P >> Q;
    for(int i=0;i<N;i++){
        cin >> A[i];
        A[i] %= P;
    }
    for(int i=0;i<N-4;i++){
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
    cout << ans << endl;
    return 0;
}