#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int solution(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == "sick" && s2 == "sick") return 1;
    if(s1 == "sick") return 2;
    if(s2 == "sick") return 3;
    return 4;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        cout << solution();
    }
    return 0;
}