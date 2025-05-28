#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i+=2)
        if(v[i]%2!=0) cnt1++;
    for(int i = 1; i < n; i+=2)
        if(v[i]%2==0) cnt2++;
    
    if(cnt1 != cnt2)
        cout << "-1" << endl;
    else
        cout << cnt1 << endl;
    

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