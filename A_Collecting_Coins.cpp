#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    bool flag = true;
    if((a+b+c+n)%3!=0) flag = false;
    else{
        ll x = (a+b+c+n)/3;
        if(x<a || x<b || x<c)
        flag = false;
    }
    cout << (flag?"YES":"NO") << endl;


}


int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}