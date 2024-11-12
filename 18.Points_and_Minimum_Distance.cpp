#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(2*n);
    for(auto &el: a) cin >> el;

    sort(a.begin(), a.end());

    vector<pair<int, int>> vp(n);
    for(int i=0; i < n; i++) {
        vp[i].first = a[i];
        vp[i].second = a[2*n-i-1];
    }

    int sum = 0;
    for(int i=1; i < n; i++) {
        int x = abs(vp[i-1].first - vp[i].first);
        int y = abs(vp[i-1].second - vp[i].second);
        sum+=(x+y);
    }

    cout << sum << endl;

    for(auto pr: vp) {
        cout << pr.first << " " << pr.second << '\n';
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
