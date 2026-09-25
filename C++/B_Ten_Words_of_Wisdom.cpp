#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    int resp = 0, mx_q = 0;
    for(int i = 1; i <= n; i++){
        int l, q; cin >> l >> q;
        if(l<=10 && q > mx_q){
            mx_q = q;
            resp = i;
        }   
    }
    cout << resp << endl;
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