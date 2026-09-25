#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    string s; cin >> s;
    vector <bool> v(26, false);
    for(int i = 1; i < n; i++){
        if(v[s[i] - 'A']){
            cout << "NO" << endl;
            return;
        }
        if(s[i] != s[i-1])
            v[s[i-1]-'A'] = true;
    }
    cout << "YES" << endl;
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