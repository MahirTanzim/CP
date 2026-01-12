#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int max_index(vector <int> v){
    int mx = INT_MIN, mx_idx = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > mx){
            mx = v[i];
            mx_idx = i;
        }
    }
    return mx_idx;
}

void solution(){
    int n, t; cin >> n >> t;
    vector <int> v(n, 0), r(n);
    vin(r);
    int surv = 0;
    // sort(all(r), greater<int>());
    while(1){
        for(int i = 0; i < n; i++){
            v[i]+=r[i];
            if(v[i] >= t) {
                cout << surv << endl;
                return;
            }
        }
        int mx_idx = max_index(v);
        v[mx_idx] = 0;
        surv++;
    }

}

int main()
{
    bijli();
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
} 