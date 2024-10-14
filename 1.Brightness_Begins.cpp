#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    
    ll k; 
    cin >> k;
    ll left = 1, right = 4e18, answer = 4e18;

    while(left <= right) {
        ll mid = (left + right) >> 1;
        ll on = mid - (int)sqrtl(mid);
        if(on < k) left = mid + 1;
        else answer = mid, right = mid - 1;
    }   
    cout << answer << "\n";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
