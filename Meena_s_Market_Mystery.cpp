#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll c;
    cin >> c;
    ll cnt = 0;
    for(ll i = 0; i < c; i++){
        ll l, r;
        cin >> l >> r;
        
        if(l < r)
            cnt++;
    }
    cout << cnt << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}