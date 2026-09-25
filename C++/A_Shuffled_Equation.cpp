#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"Yes\n"
# define no cout<<"No\n"


void solution(){
    int a, b, c;
    cin >> a >> b >> c;
    a*b == c || b*c == a || c*a == b ? yes : no;
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