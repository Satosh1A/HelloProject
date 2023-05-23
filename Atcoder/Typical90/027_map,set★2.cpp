#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

int main() {
    int N;
    std::string S;
    std::set<std::string> Set;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cin >> S;
        auto it = Set.find(S);
        if (it == Set.end()) {
            std::cout << i << std::endl;
            Set.insert(S);
        }

    }
    return 0;
}//
// Created by satos on 2023/05/23.
//
