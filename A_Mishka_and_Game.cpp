#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    int m, c;
    int cnt_m=0, cnt_c=0;
    while(n--){
        cin >> m >> c;
        if(m > c) cnt_m++;
        if(c > m) cnt_c++;
    }
    if(cnt_c < cnt_m) cout << "Mishka" << endl;
    else if(cnt_c > cnt_m) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
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