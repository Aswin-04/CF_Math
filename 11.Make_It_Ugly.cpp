#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int cnt = n;
    int lst = -1;

    for(int i=0; i < n; i++) {
        if(a[i] != a[0]) {
            cnt = min(cnt, i - lst - 1);
            lst = i;
        }
    }

    cnt = min(cnt, n - lst -1);
    if(cnt == n) cout << "-1\n";
    else cout << cnt << '\n';
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
