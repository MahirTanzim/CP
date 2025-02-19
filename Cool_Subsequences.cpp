#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int solution(){
    int n; cin >> n;

    map <ll, ll> m;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        m[val]++;
    }

    
    for(auto it : m)
        if(it.second >= 2)
            return it.first;
        
            
    
    return -1; 

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        int x = solution();
        x == -1 ? cout << x << endl :  cout << '1' << endl << x << endl;  
    }
    return 0;
}