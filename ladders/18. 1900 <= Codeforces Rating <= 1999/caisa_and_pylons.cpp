#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cost = 0;
    int prev = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        cost += a - prev;
        prev = a;
    }

    cout << cost << endl;
    return 0;
}