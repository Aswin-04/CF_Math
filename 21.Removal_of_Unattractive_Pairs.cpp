#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v(26, 0);
    
    for(char ch: s) {
        v[ch-97]++;
    }

    int mmax = *max_element(v.begin(), v.end());
    cout << max(n%2, 2*mmax - n) << '\n'; 


    
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
