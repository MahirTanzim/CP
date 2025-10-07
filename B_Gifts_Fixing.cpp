#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n;  cin >> n;
    vector <ll> cnd(n), org(n);
    for(ll &i : cnd) cin >> i;
    for(ll &i : org) cin >> i;

    ll mn_cnd = *min_element(cnd.begin(), cnd.end());
    ll mn_org = *min_element(org.begin(), org.end());

    ll operation = 0;
    for(int i = 0; i < n; i++){
        operation+=(max(cnd[i]-mn_cnd, org[i]-mn_org));
    }
    cout << operation << endl;
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