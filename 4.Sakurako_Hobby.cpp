#include<bits/stdc++.h>
using namespace std;

// int F(int i, vector<int> p, string s) {
//     int cnt = 0;
//     int j = p[i];
//     while(j != i){
//         if(s[j-1] == '0') cnt++;
//         j = p[j];
//     }

//     if(s[i-1] == '0') cnt++;

//     return cnt;
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> p(n+1);
//     for(int i=1; i <=n; i++) cin >> p[i];
//     string s;
//     cin >> s;

//     vector<int> ans(n+1, 0);

//     for(int i=1; i <= n; i++) {

//         if(ans[i] != 0) continue;
//      I made a mistake here, this logic is completely wrong, in some cycles there is a possibility that all the node are white if so the cnt for all the nodes in the cycle is 0, if so I would recompute cnt for every node which has cnt 0 which in worst case leads to O(n^2), so Instead I should use a visited array to check if the node is visited or not visited

//         int cnt = 0;
//         int j = p[i];
//         while(j != i) {
//             if(s[j-1] == '0') cnt++;
//             j = p[j];
//         }

//         if(s[i-1] == '0') cnt++;
        
//         j = p[i];

//         while(j != i) {
//             ans[j] = cnt;
//             j = p[j];
//         }
        
//         ans[i] = cnt;
//     }

//     for(int i=1; i <= n; i++) {
//         cout << ans[i] << " ";
//     }

//     cout << endl;


// }

void solve() {
    int n;
    cin >> n;
    vector<int> p(n+1);
    for(int i=1; i <=n; i++) cin >> p[i];
    string s;
    cin >> s;

    vector<int> ans(n+1, 0), vis(n+1, 0);

    for(int i=1; i <= n; i++) {

        vector<int> path;
        int j = i;
        if(vis[j]) continue;

        int cnt = 0;
        while(!vis[j]) {
            vis[j] = 1;
            if(s[j-1] == '0') cnt++;
            path.push_back(j);
            j = p[j];
        }

        for(auto it: path) ans[it] = cnt;
    }

    for(int i=1; i <= n; i++) {
        cout << ans[i] << " ";
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
