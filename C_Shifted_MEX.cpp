#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <ll> v(n);
    for (ll &i : v) cin >> i;
    sort(all(v));
    int ans = 1;
    int parm = 1;
    for(int i = 0; i < n-1; i++){
        if(v[i+1]-v[i] == 1) parm++;
        else if (v[i+1]-v[i] > 1) parm = 1;
        if(parm > ans) ans = parm;
    }
    cout << ans << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}