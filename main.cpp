#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

typedef long long ll;

using namespace std;

int EightToTen(string x) {
    int ans = 0;
    for (int i = 0; i < x.size(); i++) {
        ans += (x[i] - '0') + ans*8;
    }
    return ans;
}

string TenToNine(int x) {
    string S;
    while (x > 0) {
        S = static_cast<char>(x % 9) + S;
        x /= 9;

    }
    return S;
}

string NumberEightToFive(string x) {
    for (char & i : x) {
        if (i == '8') {
            i = '5';
        }
    }
    return x;
}

int main() {
    int  K;
    string N;
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        N = TenToNine(EightToTen(N));
        N = NumberEightToFive(N);
    }
    cout << N << endl;
    return 0;
}
