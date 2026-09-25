#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

ll gcd(ll a, ll b){
    if (a == 0) return b;
    return gcd(b % a, a);
}


ll findGCD(vector <ll>v, int n){
    int result = v[0];
    for (int i = 1; i < n; i++)
        result = gcd(v[i], result);
    return result;
}
bool noadd(vector <ll> v){
    ll prev = v[0];
    for(ll i : v){
        if(i%prev!=0) return false;
        prev = i;
    }
    return true;
}
void solution(){
    int n; cin >> n;
    vector <ll> v(n), vv;
    for(ll &it : v) cin >> it;
    if(noadd(v)){
        cout << 99 << endl;
        return;
    }
    ll GCD = findGCD(v, v.size());
    vv =v;
    sort(all(vv));
    int mn = vv[0];
    for(ll i : v)
        if(i != mn){
            cout << i/GCD << endl;
            return;
        }
           
    

    
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