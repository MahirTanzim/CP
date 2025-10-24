#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <ll> v(n);
    for(ll &i : v) cin >> i;
    vector <ll> vv = v;
    ll mx = v[0];
    ll op_2 = 0;
    
    for(int i = 1; i < n; i++){
        mx = max(vv[i], mx);
        if(i%2==1){
            if(v[i-1]>=v[i]){
                if(mx>v[i]) v[i] = mx;
                
                if(v[i-1]>=v[i]){
                    ll diff = (v[i-1] - v[i] + 1);  
                    v[i-1] -= diff;
                    op_2 += diff;
                }
            }
            if(i+1<n && v[i+1]>=v[i]){
                if(mx>v[i]) v[i] = mx;
                
                if(v[i+1]>=v[i]){
                    ll diff = (v[i+1] - v[i] + 1);  
                    v[i+1] -= diff;
                    op_2 += diff;
                }
            }
        }
        
    }
    cout << op_2 << endl;
}

int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}