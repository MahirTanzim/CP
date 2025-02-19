#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"YES\n"
# define no cout<<"NO\n"



bool solution(){
    int n, m;
    cin >> n >> m;
    vector <int> v(n), vv(m);
    vin(v);
    vin(vv);
    bool flag = true;
    for(int i = 0; i < n-1; i++){
        if(v[i] > v[i+1]){
            for(int j = 0; j < m; j++){
                if(vv[j] - v[i] < v[i])
                    return false;
            }
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution() ? yes : no;
    }
    return 0;
}