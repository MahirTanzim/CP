#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, c; cin >> n >> c;
    vector<ll>v(n), vv;
    for(auto &it : v) cin >> it;
    
    int coin = 0;
    for(int i = 0; i < n; i++){
        if(v[i] >c) coin++;
        else vv.push_back(v[i]);
    }
    sort(vv.begin(), vv.end(), greater<ll>());
    for(int i = 0; i < vv.size(); i++){
        if(vv[i]>c){
            coin++;
            continue;
        } 
        for(int j = 0; j <vv.size(); j++)
            vv[i]*=2;
    }
    cout << coin << endl;
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