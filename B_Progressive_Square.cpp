#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, c, d;
    cin >> n >> c >> d;
    vector <ll> v(n*n);
    for(auto &it : v) cin >> it;
    sort(all(v));
    ll x = v[0], y;
    vector <ll> vv;
    // vv.push_back(x);
    for(int i = 0; i < n; i++){
        vv.push_back(x);
        y = x;
        for(int j=0; j < n-1; j++){
            y+=c;
            vv.push_back(y);
        }
        x+=d;
    }
    sort(all(vv));
    // for(auto it : v) cout << it << " "; 
    // cout << endl;
    // for(auto it : vv) cout << it << " ";
    // cout << endl;
    cout << (v==vv ? "YES" : "NO") << endl;
    
}


int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}