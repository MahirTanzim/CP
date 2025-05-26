#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    sort(v.begin(), v.end());
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if((i+1)%3 == 0 && 5-v[i] >= k)
            cnt++;
    }
    cout << cnt << endl;
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