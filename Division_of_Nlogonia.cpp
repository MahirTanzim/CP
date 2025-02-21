#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(int t){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < t; i++){
        int x, y;
        cin >> x >> y;
        if(x > n && y > m)
            cout << "NE" << endl;
        else if(x > n && y < m)
            cout << "SE" << endl;
        else if(x < n && y > m)
            cout << "NO" << endl;
        else if(x < n && y < m)
            cout << "SO" << endl;
        else cout << "divisa" << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    
    while(cin >> t && t != 0){
        solution(t);
    }
    return 0;
}