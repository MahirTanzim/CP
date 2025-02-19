#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int m, n;
    cin >> m >> n;
    vector <int>v(m, 0);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v[x-1] = -1;
    }
    cout << m-n << endl;
    for(int i = 0; i < m; i++){
        if(v[i] == 0)
            cout << i+1 << " ";
        else{
            continue;
        }
    }
    cout << endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}