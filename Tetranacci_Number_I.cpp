#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;

ll dp[32];
ll fibo4(ll n){
	if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    if(n == 3) return 2;
	if(dp[n] != -1)return dp[n];
	dp[n] = fibo4(n-1) + fibo4(n-2) + fibo4(n-3) + fibo4(n-4);
	return dp[n];
}
void solution(){
    memset(dp, -1, sizeof(dp));
	ll n; cin >> n;

    cout << fibo4(n);
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