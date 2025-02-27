#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt1 = count(all(s), '-');
    ll cnt2 = count(all(s), '_');

    if(cnt1 < 2 || cnt2 < 1){
        cout << "0" << endl;
        return;
    }
        
    cnt1%2 == 0 ? cout << cnt1*cnt1*cnt2/4 << endl : cout << ((cnt1-1)/2)*((cnt1-1)/2+1)*cnt2 << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}