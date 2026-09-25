#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, m; cin >> n >> m;
    int light = 0;
    if(m%2!=0) light += ceil(n/2.0);
    light+=(n*floor(m/2.0));
    cout << light << endl;
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