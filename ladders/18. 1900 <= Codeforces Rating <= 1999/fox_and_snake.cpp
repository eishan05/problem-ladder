#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    for (int i = 0; i < m; ++i) {
        s.push_back('.');
    }
    vector<string> grid(n, s);

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; ++j) {
            grid[i][j] = '#';
        }
    }
    bool right = true;
    for (int i = 1; i < n - 1; i += 2) {
        int index = right ? m - 1 : 0;
        grid[i][index] = '#';
        right = !right;
    }

    for (string s: grid) {
        cout << s << endl;
    }

    return 0;
}