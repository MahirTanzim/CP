#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()



void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &it : v) cin >> it;
    if(v.size() < 3){
        if(v[1]>=v[0]) cout << 2*v[0] << endl;
        else cout << v[1]+v[0] << endl;
        return;
    }
    if(v[1] == 0){
        cout << v[0] << endl;
        return;
    }
    cout << min(2*v[0], v[0]+v[1]) << endl;
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