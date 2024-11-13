#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for(ll &it: v) cin >> it;

    ll k = 2;
    while(true) {
        unordered_set<ll> st;
        for(ll el: v) {
            st.insert(el%k);
        }

        if(st.size() == 2) {
            cout << k << endl;
            return;
        }
        k*=2;
    }


}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
