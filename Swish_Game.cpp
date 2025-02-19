#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int m, k;
    cin >> m >> k;
    string s;
    cin >> s;
    int cnt_s = count(all(s), 'S');
    k <= cnt_s ? cout << m << endl : cout << m+(k-cnt_s-1) << endl;
    
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