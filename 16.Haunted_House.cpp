#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;
    for(int i=0; i < n; i++) {
        if(s[i] == '0') v.push_back(i);
    }

    long long ans = 0;

    for(int i=n-1; i >= 0; i--) {
        if(v.size() == 0) {
            cout << -1 << " ";
            continue;
        }

        auto it = v.rbegin();
        ans+=(i-*it);
        cout << ans << ' ';
        v.pop_back();
    }

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
