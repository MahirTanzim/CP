#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int k, r;
    cin >> k >> r;
    int i = 1;
    while(1){
        int kk = k*i;
        if(kk%10 == 0 || kk%10 == r){
            cout << i << endl;
            return;
        }
        
            
        i++;
    }
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