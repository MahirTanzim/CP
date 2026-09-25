#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


ll time(ll x, string s, int n){
    if(count(s.begin(), s.end(), 'A') == n)
        return x;
    ll t = 0;
    int i = 0; 
    while(x != 0){
        if(s[i] == 'A')
            x-=1;
        else if(s[i] == 'B')
            x = floor(x/2.0);
        t++;
        i = (i + 1) % n;
    }
    return t;
    
}

void solution(){
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector <ll> v(q);
    for(auto &it : v) cin >> it;
    for(auto it : v){
        cout << time(it, s, n) << endl;
    }

}

int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
} 