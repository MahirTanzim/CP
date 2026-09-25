#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll a, b, c; cin >> a >> b >> c;
    int t1, t2;
    t1 = a-1;
    t2 = abs(b-c)+c-1;
    cout << (t1>t2 ? 2 : t2>t1 ? 1 : 3) << endl;
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