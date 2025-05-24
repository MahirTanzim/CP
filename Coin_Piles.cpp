#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll a, b; cin >> a >> b;
    if(2*a-b < 0 || 2*b-a < 0 || (2*a-b)%3 != 0 || (2*b-a)%3 != 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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