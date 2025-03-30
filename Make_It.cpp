#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


bool solution(){
    int n; cin >> n;

    while(n != 1){
        if(n&1) n-=3;
        else n/=2;
        if(n<1) return false;
    }

    return true;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    
    while(tc--){
        cout << (solution() ? "YES" : "NO") << endl;
    }
    return 0;
}