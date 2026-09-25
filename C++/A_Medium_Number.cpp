#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int a, b, c; cin >> a >> b >> c;
    if((a>b && a<c) || (a<b && a>c))
        cout << a << endl;
    else if((b>a && b<c) || (b>c && b<a))
        cout << b << endl;
    else
        cout << c << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}