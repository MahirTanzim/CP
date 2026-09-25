#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

// void solution(){
//     ll n; cin >> n;
//     ll a, b, c, d;
//     ll ans = 0;
//     for(int i = 0; i < n; i++){
//         cin >> a >> b >> c >> d;
//         if(a>c){
//             ans+=(a-c);
//             a-=(a-c);
//         }
//         if(b>d && a == 0)
//             ans+=(b-d);
//         else if(b>d && a!=0)
//             ans+=(b-d+a);
//     }
//     cout << ans << endl;
    
// }

void solution(){
    ll n; cin >> n;
    ll a, b, c, d;
    ll ans = 0;
    
    vector <vector<ll>> l(n);
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        l[i] = {a, b, c, d};
    }
    for(auto &v : l){
        
        if(v[0]>v[2]){
            ans+=(v[0]-v[2]);
            v[0]-=(v[0]-v[2]);
        }
        if(v[1]>v[3] && v[0] == 0)
            ans+=(v[1]-v[3]);
        else if(v[1]>v[3] && v[0]!=0)
            ans+=(v[1]-v[3]+v[0]);
    }

    cout << ans << endl;
    
    
    
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