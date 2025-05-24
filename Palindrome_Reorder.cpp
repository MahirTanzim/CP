#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string s;
    cin >> s;
    int n = s.size();
    string ans(n, ' ');
    map <char, int> mp;
    for(char c : s)
        mp[c]++;
    
    int odd = 0;
    for(auto &m : mp){
        if(m.second%2 != 0)
            odd++;
    }
    if(odd>1){
        cout << "NO SOLUTION" << endl;
        return;
    }
    for(auto &m : mp)
        if(m.second%2==1){
            ans[n/2] = m.first;
            m.second-=1;
        }
            
    int l = 0, r = n-1;
    for(auto &m : mp){
        while(m.second >0){
            ans[l++] = m.first;
            ans[r--] = m.first;
            m.second-=2;
        }
    }
    cout << ans << endl;

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