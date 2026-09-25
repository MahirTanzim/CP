#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n; cin >> n;
        int set_bit = 0;
        ll tmp = n;
        while (tmp > 0) {
            if (tmp & 1) set_bit++;
            tmp >>= 1;
        }
        cout << pow(2, set_bit-1) << endl;
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