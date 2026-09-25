#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, j, k;
    cin >> n >> j >> k;
    vector <int> v(n);
    for(auto &it : v) cin >> it;
    if(k>1){
        cout << "YES" << endl;
        return;
    }
    int player = v[j-1];
    sort(all(v));
    cout << (player == v[n-1] ? "YES" : "NO") << endl; 
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