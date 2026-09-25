#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


void solution(){
    int n; cin >> n;
    vector <ll> v(n);
    for(auto &it : v) cin >> it;
    bool flag = true;
    for(int i = 0; i < n; i++)
        if(v[i] <= max(2*i, 2*(n-1-i))){
            flag = false; break;
        }
    flag ? yes : no;
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