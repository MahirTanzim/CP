#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <ll> v(n);
    for(ll &i : v) cin >> i;
    map <ll, int> mp;
    for(ll i : v) mp[i]++;
    vector <int> vv;
    for(auto it : mp){
        vv.push_back(it.second);
    }
    count(all(vv), vv[0]) == vv.size() ? cout << "YES" : cout << "NO";
    cout << endl;
}


int main()
{
    bijli();
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}