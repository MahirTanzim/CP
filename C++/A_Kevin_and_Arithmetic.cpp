#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int

int solution(int n){
    vector<ll>v(n);
    for(auto &it : v)
        cin >> it;
    
    int e = 0, o = 0;
    for(auto it : v)
        it%2 ? o++ : e++;
    if(o > 0 && e > 0)
        return o+1;
    if(e == 0 && o > 0)
        return o-1;
    if(e > 0 && o == 0)
        return 1;
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << endl;
        
    }
    
    
    return 0;
}