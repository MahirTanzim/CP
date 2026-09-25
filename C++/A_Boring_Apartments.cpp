#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;



void solution(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 1; i <= s.size(); i++)
        sum+=i;
    int press = 10*(s[0]-'1')+sum;
    cout << press << endl;

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