#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"YES\n"
# define no cout<<"NO\n"
as
as
dasd
asda

void solution(){
    int m;
    cin >> m;
    int n = m-2;
    vector<int>v(n);
    vin(v);
    
    for(int i = 0; i < m; i++){
        if(v[i] == 1 && v[i+1] == 0 && v[i+2] == 1){
            yes;
            return;
        }
    }
    no;
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