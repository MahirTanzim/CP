#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <ll> v(n);
    vin(v);
    if(!is_sorted(all(v))){
        cout << 0 << endl;
        return;
    }
    ll mn_int = v[1]-v[0];
    for(int i = 0; i < n-1; i++){
        mn_int = min(mn_int, v[i+1]- v[i]);
    }
    cout << mn_int/2+1 << endl;
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