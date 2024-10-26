#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto &it: v) cin >> it;

    for(auto it: v) {
        if(it%k == 0) {
            cout << 0 << endl;
            return;
        }
    }

    int mini = INT_MAX;
    for(auto it: v) {
        int val = (( (it+k-1) /k ) *k ) -it;
        mini = min(mini, val);
    }

    if(k == 4) {
        vector<int> v2(n);
        for(int i=0; i < n; i++) {
            int val = (( (v[i]+1) /2 ) *2 ) -v[i];
            v2[i] = val;
        }

        sort(v2.begin(), v2.end());

        cout << min(mini, v2[0]+v2[1]) << endl;
        return;
    }

    cout << mini << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
