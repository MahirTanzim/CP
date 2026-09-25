#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n;
    cin >> n;
    vector <int> p(n+1), q(n+1);
    for(int i = 1; i < n+1; i++)
        cin >> p[i];
    for(int i = 1; i < n+1; i++)
        cin >> q[i];

    vector <int> vvv(n+1);
    for(int i = 1; i < n+1; i++){
        vvv[q[i]] = q[p[i]];
    }

    for(int i = 1; i < n+1; i++)
        cout << vvv[i] << " ";
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