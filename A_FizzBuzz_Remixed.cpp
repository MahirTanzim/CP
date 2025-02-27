#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n;
    cin >> n;
    ll cnt = 0, x;
    for(ll i = n; i >= 0; i--){
        if(i%3 == i%5){
            x = i;
            break;
        }
    }

    if(n%3 == n%5 && n%3 == 0) cnt = 3*x/15 + 1;
    else if(n%3 == n%5 && n%3 == 1) cnt = 3*x/15 + 2;
    else  cnt = 3*x/15 + 3;

    

        
    cout << cnt << endl;
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