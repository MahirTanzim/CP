#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string s;
    getline(cin, s);
    for(auto &it : s)
        if(isalpha(it)) it+=3;
    reverse(all(s));
    for(int i = s.size()/2; i < s.size(); i++)
        s[i]-=1;
    
    cout << s << endl;
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    cin.ignore();
    while(t--){
        solution();
    }
    return 0;
}