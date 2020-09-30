#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (char c: s) {
        ++ans;
        if (c == '0') {
            break;
        }
    }
    cout << ans << endl;
}