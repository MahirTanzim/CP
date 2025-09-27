#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll x, y;
    cin >> x >> y;

    if(x == y) cout << -1 << endl;
    else if(x < y) cout << 2 << endl;
    else{
        if(y == 1) cout << -1 << endl;
        else if(x-y > 1) cout << 3 << endl;
        else cout << -1 << endl;
    }
    
    

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