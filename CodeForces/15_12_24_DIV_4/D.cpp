#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<int> vec(n);
    set<int> s;

    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;

        if (s.insert(curr).second) {
            vec[i] = curr;
        } else {
            vec[i] = -1;
        }
    }

    vector<int> notin;
    for (int i = 1; i <= n; i++) {
        if (!s.count(i)) {
            notin.push_back(i);
        }
    }

    int idx = 0;
    for (int i = 0; i < n; i++) {
        cout << (vec[i] == -1 ? notin[idx++] : vec[i]) << " ";
    }
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
