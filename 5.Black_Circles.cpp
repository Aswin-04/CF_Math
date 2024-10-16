#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> c(n);
    for(auto &it: c) cin >> it.first >> it.second;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    long long t = 1LL * (x1 - x2) * (x1 - x2) + 1LL * (y1 - y2) * (y1 - y2);

    for(auto it: c) {
        long long d = 1LL * (it.first - x2) * (it.first - x2) + 1LL * (it.second - y2) * (it.second - y2);
        if(d <=  t) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
