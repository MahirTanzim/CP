#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;    
    map<int, int> mp;
    int m;
    while(n--){
        cin >> m;
        mp[m]++;
    }
    for(auto it : mp){
        if(it.second>=3){
            cout << it.first << endl;
            return;
        }
    }
    cout << -1 << endl;
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