#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for(auto &it: a) cin >> it;

    vector<ll> x(q);
    for(auto &it: x) cin >> it;

    unordered_set<ll> st;

    for(int i=0; i < q; i++) {
        if(st.count(x[i])) continue;
        st.insert(x[i]);
        for(int j=0; j < n; j++) {
            if(a[j] % (1ll << x[i]) == 0) {
                a[j] = a[j] + ((1ll << x[i]) / 2);
            }
        }
    }

    for(auto ele: a) cout << ele << " ";
    cout << endl; 
}

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }

    return 0;
}
