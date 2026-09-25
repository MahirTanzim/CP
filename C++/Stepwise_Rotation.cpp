#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll n, q;
    cin >> n >> q;
    list <ll> v, vv(n);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    ll k;
    cin >> k;
    k%=n;
    while(k--){
        if (!v.empty()) {
        ll end = v.back();
        v.pop_back();
        v.push_front(end);
    }

    }
    vector <ll> vvv;
    ll sum = 0;
    for(auto it : v){
        sum+=it;
        vvv.push_back(sum);
    }
    
    while(q--){
        ll l, r;
        cin >> l >> r;
        if(l == 1)
            cout << vvv[r-1] << endl;
        else
        cout << vvv[r-1] - vvv[l-2] << endl;
    }
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin >> t;
    while(t--){
        solution();
    }
    return 0;
}