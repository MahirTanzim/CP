#include <bits/stdc++.h>
using namespace std;
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, k; cin >> n >> k;
    vector <int> v(n);
    vin(v);
    count(all(v), k) ? cout << "YES" endl : cout << "NO" << endl;
        
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