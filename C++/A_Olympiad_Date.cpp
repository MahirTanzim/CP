#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector<int> v(n);
    vin(v);
    int cnt[10];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0; i < n; i++){
        cnt[v[i]]++;
        if(cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 && cnt[3] >= 1 && cnt[5] >= 1){
            cout << i+1 << endl; 
            return;
        }
    }
    cout << 0 << endl;
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