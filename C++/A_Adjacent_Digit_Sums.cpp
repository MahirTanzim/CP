#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


void solution(){
    int x, y;
    cin >> x >> y;
    if(y == x+1)
        yes;
    else if(x%9 == 0 && y == 1)
        yes;
    else no;

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