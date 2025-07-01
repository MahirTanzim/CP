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
    string s(n, '0');
    
    int mx = INT_MIN, mx_idx;
    int mn = INT_MAX, mn_idx;
    for(int i = 0; i < n; i++){
        if(v[i] > mx){
            mx = v[i];
            mx_idx = i;
        }
        if(v[i] < mn){
            mn = v[i];
            mn_idx = i;
        }
    }
    s[0] = '1'; s[n-1] = '1'; s[mx_idx] = '1'; s[mn_idx] = '1';
    cout << s << endl;

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