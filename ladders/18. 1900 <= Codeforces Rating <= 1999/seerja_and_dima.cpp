#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    bool seerja = true;
    int s_score = 0;
    int d_score = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    while (l <= r) {
        int score;
        if (arr[l] > arr[r]) {
            score = arr[l];
            ++l;
        } else {
            score = arr[r];
            --r;
        }
        if (seerja) {
            s_score += score;
        } else {
            d_score += score;
        }
        seerja = !seerja;
    }

    cout << s_score << " " << d_score << endl;
}