#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string crd; cin >> crd;
    bool poss = false;
    for(int i = 1; i <=5; i++){
        string str; cin >> str;
        if(str[0]==crd[0] || str[1]==crd[1]) poss = true;
    }
    cout << (poss? "YES": "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}