#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int


void solution(int n, int m){
    vector <vector<int>> v;

    for(int i = 0; i < n; i++){
        vector <int> tmp;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            tmp.push_back(x);
        }
        sort(tmp.begin(), tmp.end());
        v.push_back(tmp);
    }

    
    if(m > 1){
        for(int i = 0; i < m-1; i++){
            if(v[0][i+1] - v[0][i] != n){
                cout << "-1" << endl;
                return;
            }
        }
    }

    vector <int> vv(n, 1);
    for(int i = 0; i < n; i++)
        vv[v[i][0]]+=i;
    
    for(auto &it : vv)
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
        int n, m;
        cin >> n >> m;
        solution(n, m);
    }
    
    return 0;
}