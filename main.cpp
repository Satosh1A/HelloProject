#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>
#include <map>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    int N;
    int x[100], y[100];
    cin >> N;
    int max_time = (1 << 30);
    int time[12][12];
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> time[i][j];
        }
    }
    vector<int> vec;
    for (int i = 1; i <= N; i++) {
        vec.push_back(i);
    }
    int M;
    cin >> M;
    for (int i = 1; i <= M; i++) {
        cin >> x[i] >> y[i];
    }
    bool naka[12][12];
    for (int i = 0; i < M; i++) {
        naka[x[i]][y[i]] = true;
        naka[y[i]][x[i]] = true;
    }
    do {
        bool flag = true;
        int sum = 0;
        for (int i = 0; i < N - 1; i++) {
            if (naka[vec[i]][vec[i + 1]] == true) {
                flag = false;
            }
        }
        for (int i = 0; i < N; i++) {
            sum += time[vec[i]][i + 1];
        }
        if (flag == true) {
            cout << 1 << endl;
            max_time = min(max_time, sum);
        }
    } while (next_permutation(vec.begin(), vec.end()));

    if (max_time == (1 << 30)) {
        max_time = -1;
    }
    cout << max_time << endl;
    return 0;
}
