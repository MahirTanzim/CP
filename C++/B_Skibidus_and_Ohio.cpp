#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int solution(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size()-1; i++)
        if(s[i] == s[i+1])
            return 1;
    return s.size();
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        cout << solution();
        cout << endl;
    }
    return 0;
}