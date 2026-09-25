#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(auto &it : v) cin >> it;
    int x0r =  0, ans;
    for(int i : v) x0r = x0r^i;
    if(n%2==0)
        if(x0r == 0) ans = 0;
        else ans = -1;
    else
        if(x0r == 0) ans = 0;
        else ans = x0r;

    cout << ans << endl;
    
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