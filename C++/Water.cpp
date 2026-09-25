#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
    vector <ll> vv=v;
    sort(all(vv), greater<>());
    ll x = vv[0], y = vv[1];
    int xi, yi;
    for(int i = 0; i < n; i++){
        if(v[i] == x) xi = i;
        if(v[i] == y) yi = i;
    }
    cout << min(xi, yi) << " " << max(xi, yi) << endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}