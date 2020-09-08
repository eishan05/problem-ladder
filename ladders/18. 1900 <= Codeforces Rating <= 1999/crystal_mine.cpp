#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        s.push_back('*');
    }
    vector<string> grid(n, s);
    int start = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < start; j++) {
            grid[i][n / 2 + j] = 'D';
            grid[i][n / 2 - j] = 'D';
        }
        if (i < n / 2) {
            ++start;
        } else {
            --start;
        }
    }

    for (string s: grid) {
        cout << s << endl;
    }

    return 0;
}