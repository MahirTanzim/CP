#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


void solution(){
    int n;
    cin >> n;
    int m = n-2;
    vector <int> v(m);
    vin(v);
    bool flag = true;
    for(int i = 0; i < m-2; i++){
        if(v[i] == 1 && v[i+1] == 0 && v[i+2] == 1){
            flag = false;
            break;
        }
    }
    flag ? yes : no;
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