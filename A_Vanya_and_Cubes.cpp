#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    if(n==2|| n==1){
        cout << 1 << endl;
        return;
    }
    int sum = 0;
    int lvl = 1;
    while(sum < n){
        sum+=(sum+lvl);
        lvl++;
    }
    cout << lvl-1 << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}