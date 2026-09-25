#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
#define all(x) x.begin(),x.end()
# define yes cout<<"YES\n"
# define no cout<<"NO\n"

bool solution(int n){
    string s;
    cin >> s;
    int cnt1 = count(s.begin(), s.end(), '1');
    cout << cnt1 << endl;
    if(cnt1&1) return false;
    
    if(cnt1 == 2)
        for(int i = 0; i < s.size()-1; i++)
            if(s[i] == '1' && s[i+1] == '1')
                return false;
    return true;

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
        solution(n) ? yes : no;
        
    }
    
    
    return 0;
}