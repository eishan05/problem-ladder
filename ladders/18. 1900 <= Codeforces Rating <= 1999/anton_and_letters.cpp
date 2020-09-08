#include<bits/stdc++.h>

using namespace std;

bool is_alph(char c) {
    return c >= 'a' && c <= 'z';
}

int main() {
    string s;
    getline(cin, s);
    set<char> st;
    for (char c: s) {
        if (is_alph(c)) {
            st.insert(c);
        }
    }
    cout << st.size() << endl;
}