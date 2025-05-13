#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int y, w; cin >> y >> w;
    int a = max(y,w);
    int n = 7-a;
    int d = 6;
    for(int i = 1; i <= n; i++)
        if(d%i == 0 && n%i == 0){
            d/=i;
            n/=i;
        }
    cout << n << "/" << d << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}