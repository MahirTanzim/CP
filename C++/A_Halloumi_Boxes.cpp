#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, k; cin >> n >> k;
    vector <ll> v(n);
    for(ll &i : v) cin >> i;
    cout << (k==1 && !is_sorted(all(v)) ? "NO" : "YES") << endl;
}


int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}