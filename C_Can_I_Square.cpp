#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


void solution(){
    int n; cin >> n;
    vector <ll> v(n);
    ll s = 0;
    for(auto &it : v){
        cin >> it;
        s+=it;
    } 
    floor(sqrt(s)) == sqrt(s) ? yes : no;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}