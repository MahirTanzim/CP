#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool solution(int n, int m){
    vector<ll> v(n), vv(m), a;

    for(auto &it : v) cin >> it;
    for(auto &it : vv) cin >> it;

    sort(v.begin(), v.end());
    sort(vv.begin(), vv.end());

    int c = 0;

    for(int i = 0; i < n - 1; i++){ 
        if(abs(v[i] - v[i+1]) <= 1) {
            a.push_back(v[i] + v[i+1]); 
        }
    }

   
    if (a.size() != vv.size()) return false;

    return a == vv; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        solution(n, m) ? yes : no;
    }

    return 0;
}
