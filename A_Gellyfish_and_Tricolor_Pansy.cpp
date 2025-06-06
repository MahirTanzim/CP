#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (min(a,c) >= min(b,d) ? "Gellyfish" : "Flower") << endl;
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