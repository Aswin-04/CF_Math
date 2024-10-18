#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> b(32);
    for(int i=31; i >= 0; i--) {
        b[i] = (n >> i) & 1;
    }

    int j;
    for(int i=0; i < 32;) {

        if(!b[i]) {
            i++;
            continue;
        }

        j=i+1;
        while(b[j]) {
            b[j] = 0;
            j++;
        }

        if(j > i+1) {
            b[j] = 1;
            b[i] = -1;
        }

        i=j;
    } 

    cout << 32 << '\n';
    for(auto it: b) cout << it << " ";
    cout << '\n';
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;   
}
