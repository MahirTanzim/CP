#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    vector <int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(all(v));
    if(v[2] != v[1]) cout << "NO" << endl;
    else cout << "YES" << endl << v[0] << " " << v[0] << " " << v[2] << endl;

    
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