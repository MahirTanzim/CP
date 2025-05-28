#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s; cin >> s;
    int cal = 0;
    for( char c : s){
        if(c == '1') cal+=a1;
        if(c == '2') cal+=a2;
        if(c == '3') cal+=a3;
        if(c == '4') cal+=a4;
    }
    cout << cal << endl;
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