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
    int cnt1 = count(v.begin(), v.end(), 1);
    int cnt2 = count(v.begin(), v.end(), 2);
    int cnt3 = count(v.begin(), v.end(), 3);
    int tmcnt = min({cnt1, cnt2, cnt3});
    vector<vector<int>> vv;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if(v[j]-1 == i) vv[i].push_back(j+1);
            
        }
            
        
        
    }
    
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