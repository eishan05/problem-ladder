#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int cost = arr[0];
    int curr = 0;
    for (int i = 0; i < n - 1 ; ++i) {
        int next = arr[i + 1] - arr[i];
        if (next > curr) {
            cost += next - curr;
            curr = 0;
        } else {
            curr -= next;
        }
    }
    cout << cost << endl;
    return 0;
}