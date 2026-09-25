#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, m; cin >> n >> m;
    string s;
    cin >> s;
    int cnt[7];
    memset(cnt, 0, sizeof(cnt));
    for(char ch: s){
        if(ch == 'A') cnt[0]++;
        if(ch == 'B') cnt[1]++;
        if(ch == 'C') cnt[2]++;
        if(ch == 'D') cnt[3]++;
        if(ch == 'E') cnt[4]++;
        if(ch == 'F') cnt[5]++;
        if(ch == 'G') cnt[6]++;
    }
    int ans = 0;
    for(int i = 0; i < 7; i++)
        if(cnt[i] < m) ans+=(m-cnt[i]);
    cout << ans << endl;
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