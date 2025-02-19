#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    int l = s.size();
    for(int i = 0; i < l/2; i++){
        if(s[i] < s[l-1-i]) break;
        else if(s[i] > s[l-1-i]) flag = true;
        else continue;
    }

    string rev_s = s;
    reverse(all(rev_s));
    if(!flag) cout << s << endl;
    else cout << rev_s << s << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}