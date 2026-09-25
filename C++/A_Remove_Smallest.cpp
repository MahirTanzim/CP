#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    if(n == 1){
        cout << "YES" << endl;
        return;
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        if(v[i] - v[i-1] > 1){
            cout << "NO" << endl;
            return;
        }
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