#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"YES\n"
# define no cout<<"NO\n"

bool is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0) return false;
    
    return true;
}

void solution(){
    int n, m;
    cin >> n >> m;
    if(!is_prime(m)){
        cout<<"NO\n"; return;
    }
    for(int i = n+1; i < m; i++)
        if(is_prime(i)){
            cout<<"NO\n"; return;
        }
    cout<<"YES\n";

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