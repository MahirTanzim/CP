#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


string solution(){
    int a, b, c; cin >> a >> b >> c;
    if(a<b && b<c) return "STAIR";
    else if(a<b && b>c) return "PEAK";
    return "NONE";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--){
        cout <<  solution() << endl;
    }
    return 0;
}