#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <string> v = {"0", "1"};
    for(int i = 2; i <= n; i++){
        vector <string> vv = v;
        reverse(vv.begin(), vv.end());
        for(string &s : v) s+="0";
        for(string &s : vv) s+="1";
        
        v.insert(v.end(), vv.begin(), vv.end());
    }
    
    for(string s : v) cout << s << endl;
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