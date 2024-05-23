#include<iostream>
using namespace std;

void lastOcca(int i, string &s, char &x, int &res) {
    // base case
    if (i >= s.size()) {
        return;
    }

    if (s[i] == x) {
        res = i;
    }

    lastOcca(i + 1, s, x, res);
}

int main() {
    string s;
    cin >> s;
    char x;
    cin >> x;
    int res = -1;
    int i = 0;
    lastOcca(i, s, x, res);

    cout << res << " ";

    return 0;
}
