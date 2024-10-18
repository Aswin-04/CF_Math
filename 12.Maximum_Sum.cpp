#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 1e9+7;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &i: a) cin >> i;

    ll mss = 0;
    ll cs = 0;

    for(auto i: a) {
        cs+=i;
        mss = max(mss, cs);
        cs = max(cs, 0LL);
    }

    ll sum = (accumulate(a.begin(), a.end(), 0LL) % M + M) % M;

    for(int i=0; i < k; i++) {
        sum+=mss;
        sum%=M;
        mss = (mss*2)%M;
    }

    cout << sum << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
