#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, k; cin >> n >> k;
    vector <int> v(n);
    for(int &it : v) cin >> it;
    int cnt0 = 0;
    vector <int> vv;
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) cnt0++; 
        else 
            if(cnt0 > 0) { 
                vv.push_back(cnt0);
                cnt0 = 0;
            }
        
    }
    if(cnt0 > 0) vv.push_back(cnt0);
    
    int ans = 0;
    for(int i : vv){
        if(i<k) continue;
        if(i==k){
            ans++; continue;
        }
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            cnt++;
            if(cnt==k) {
                ans++; 
                if(j!=i) j++;
                cnt = 0;
            }
        }
        

    }
    cout << ans << endl;
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