#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;    
    map <char, int> mp1, mp2;
    for(char c : s1)
        mp1[c]++;
    for(char c : s2)
        mp1[c]++;
    for(char c : s3)
        mp2[c]++;

    if (mp1 == mp2)
        cout << "YES" endl;
    else cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}