#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n), q;
    for(auto &it: p) cin >> it;

    reverse(p.begin(), p.end());
    reverse(p.begin(), p.begin()+n-1);

    for(auto it: p) cout << it << " ";
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
