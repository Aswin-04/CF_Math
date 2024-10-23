#include<bits/stdc++.h>
using namespace std;


void solve() {

    int n;
    cin >> n;
    int cnt = 1;
    for(int i=0; i < n; i++) {
        cout << cnt << " ";
        cnt+=2;
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
