#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    int mx_welfare = *max_element(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans+=(mx_welfare-v[i]);
    
    cout << ans << endl;
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