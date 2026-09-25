#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    int itr = 0;
    while(x.size() < 100){
        if(x.find(s) != string::npos){
            cout << itr << endl;
            return;
        }
        x+=x;
        itr+=1;            
    }
    cout << -1 << endl;

    

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