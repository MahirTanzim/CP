#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()



void solve() {
    int n; cin >> n;
    vector <ll> v(n);
    for(auto &it : v) cin >> it;
    ll mx_sum = accumulate(all(v), 0LL);
    vector <ll> vv;
    while(v.size() > 1){
        for(int i = 0; i < v.size()-1; i++)
            vv.push_back(v[i+1]-v[i]);
        ll sum = abs(accumulate(all(vv), 0LL));
        mx_sum = max(mx_sum, sum);
        v = vv;
        vv.clear();
    }
    cout << mx_sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
