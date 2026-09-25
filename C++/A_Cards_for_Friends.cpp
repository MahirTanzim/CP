#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


string solution(){
    ll w, h, n;
    cin >> w >> h >> n;
    ll cnt_w = 1, cnt_h = 1;
    while(w%2==0){
        w/=2;
        cnt_w*=2;
    }
    while(h%2==0){
        h/=2;
        cnt_h*=2;
    }
    ll cnt = cnt_h*cnt_w;
    
    return cnt>=n ? "YES" : "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0 );
    int tc=1;
    cin >> tc;
    while(tc--){
        cout << solution() << endl;
    }
    return 0;
}