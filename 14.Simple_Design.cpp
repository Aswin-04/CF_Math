#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x, k;
    cin >> x >> k;


    while(true) {
        int sum = 0;
        int temp = x;
        while(temp > 0) {
            sum+=(temp%10);
            temp/=10;
        }

        if(sum%k == 0) {
            cout << x << endl;
            return;
        }
        x++;
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
