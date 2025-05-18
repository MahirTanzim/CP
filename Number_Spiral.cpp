#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll y, x;
    cin >> y >> x;

    if(x > y)
        if(x%2==1)
            cout << x*x-y+1 << endl;
        else
            cout << (x-1)*(x-1)+y << endl;
    else
        if(y%2==0)
            cout << y*y-x+1 << endl;
        else
            cout << (y-1)*(y-1)+x << endl;

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