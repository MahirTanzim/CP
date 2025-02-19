#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll n, k; cin >> n >> k;
    vector <ll> v(n);
    for(auto &it : v) cin >> it;
    vector <ll> vv;

    if(n == k){
        for(ll i = 1; i < n; i+=2)
            vv.push_back(v[i]);
        vv.push_back(0);
        for(ll i = 0; i < vv.size(); i++){
            if(vv[i] != i+1){
                cout << i+1 << endl;
                break;
            }
        }
    }
    else{
        if(v[n-k+1] == 1)
            cout << "2" << endl;
        else cout << "1" << endl;
    }


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