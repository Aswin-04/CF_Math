#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(k);
    for(auto &it: v) cin >> it;

    sort(v.begin(), v.end());
    ll cnt = 0;

    for(int i=0; i < k-1; i++) {
        cnt+=(2*v[i]-1);
    }

    cout << cnt << '\n';

}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
