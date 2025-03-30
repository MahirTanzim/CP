#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;

void solution(){
	ll n; cin >> n;
    ll dp[n+1];
    dp[0] = 0; dp[1] = 1; dp[2] = 1; dp[3] = 2;
    for(int i = 4; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
    cout << dp[n];
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}