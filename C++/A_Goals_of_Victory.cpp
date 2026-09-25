#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n-1);
    for(int &i : v) cin >> i;
    int eff = accumulate(v.begin(), v.end(), 0);
    cout << -eff << endl;
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