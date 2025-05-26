#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
vector <int> v;


void solution(){
    int n; cin >> n;
    cout << v[n-1] << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    for(int i = 1; i <= 1667; i++){
        if(i%3 == 0 || i%10 == 3) continue;
        v.push_back(i);
    }
    // cout << v.size() << endl;
    while(tc--){
        solution();
    }
    return 0;
}