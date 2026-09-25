#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    ll th = 1000000000;
    vector <ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        x = x+th;
        v.push_back(x);
    }
    ll target; cin >> target;
    target+=th;
    
    for(int i = 0; i < n-1; i++){
        if(target == v[i]+v[i+1]){
            cout << i << " " << i+1 << endl;
            return;
        }
    }
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