#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    if(n&1){
        if(n == k)
            cnt = 1;
        else{
            n-=k;
            if(n < k) cnt = 2;
            else {
                cnt = (n/(k-1))+1;
                if(n%(k-1) != 0) cnt++;
            }
        }
    }
    else {
        cnt = n/(k-1);
        if(n%(k-1) != 0) cnt++;
    }
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