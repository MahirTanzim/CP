#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll a, b, n; cin >> a >> b >> n;
    int opr = 0;
    while(a<=n && b<=n){
        if(a>b) b+=a;
        else a+=b;
        opr++;
    }
    cout << opr << endl;

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