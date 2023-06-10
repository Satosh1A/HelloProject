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
    int n,q;
    cin >> n >> q;
    deque<int> a;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    for(int i=0;i<q;i++){
        int t,x,y;
        cin >> t >> x >> y;
        if(t==1){
            swap(a[x-1],a[y-1]);
        }else if(t==2){
            int temp;
            temp = a.back();
            a.pop_back();
            a.push_front(temp);
        }else{
            cout << a[x-1] << endl;
        }
    }
    return 0;
}
//
// Created by satos on 2023/06/10.
//
