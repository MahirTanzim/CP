#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    if(n <= 3 && n !=1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        for(int i = 2; i <=n; i+=2)
            cout << i << " ";
        for(int i = 1; i <= n; i+=2)
            cout << i << " ";
        
    }
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