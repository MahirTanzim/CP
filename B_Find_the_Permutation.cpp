#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int

void solution(){
    int n;
    cin >> n;
    vector <string> s(n);
    for(auto &it : s)
        cin >> it;
    vector <int> v(n, 1);
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if((s[i][j] == '1' && i > j) || (s[i][j] == '0' && i < j))
                cnt++;
        }
        v[cnt]+=i;
    }
    for(auto it : v)
        cout << it << " ";
    cout << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}