#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll n; cin >> n;
    ll a, b, c, d;
    ll ans = 0;
    int c1=0, c2=0;
    vector <ll> v[n];
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        v[i] = {a, b, c, d};
        if(c>a)c1+=(c-a);
        if(d>b) c2+=(d-b);
    }
    for(int i = 0; i < n; i++){
        if(v[i][0]>v[i][2] && (v[i][2]-v[i][0])<=c1) {
            c1-=(v[i][2]-v[i][0]);
            ans+=(v[i][2]-v[i][0]);
        }
        else if(v[i][0]>v[i][2] && (v[i][2]-v[i][0])>c1) {
            ans+=c1;
        }
    }
    cout << ans+c2 << endl;
    
    
    
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