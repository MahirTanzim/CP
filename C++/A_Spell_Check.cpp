#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    string Timur = "Timur";
    sort(Timur.begin(), Timur.end());
    string s; cin >> s;
    if(n!=5){
        cout << "NO" << endl;
        return;
    }
    sort(s.begin(), s.end());
    s == Timur ? cout << "YES" << endl : cout << "NO" << endl;
    
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