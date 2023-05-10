#include <iostream>
#include <algorithm>
constexpr int INF = 1000000000;
int N, Q, A[300010];
int main() {
    std::cin >> N;
    for (int i = 0; i < N; i++) std::cin >> A[i];
    std::sort(A, A + N);
    std::cin >> Q;
    for (int i = 0; i < Q; i++) {
        int B;
        std::cin >> B;
        int ans = INF;
        auto p = std::upper_bound(A, A + N, B);
        if (p != A + N) ans = std::min(ans, *p - B);
        if (p != A) ans = std::min(ans, B - *std::prev(p));
        std::cout << ans << std::endl;
    }
    return 0;
}//
// Created by satos on 2023/05/11.
//
