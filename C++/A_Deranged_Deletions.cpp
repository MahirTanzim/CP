#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n), vv, ans;
    for(int &it : v) cin >> it;
    vv = v; 
    sort(all(vv));
    for(int i = 0; i < n; i++)
        if(v[i] != vv[i]) ans.push_back(v[i]);
    if(ans.empty()) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for(int i : ans)
            cout << i << " ";
        cout << endl;
    }
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