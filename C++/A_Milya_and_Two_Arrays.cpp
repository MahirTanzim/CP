#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solution(){
    int n; cin >> n;
    set <ll> a, b;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        a.insert(val);
    }
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        b.insert(val);
    }
    int cnt = 0;
    
    for(auto it : a) cnt++;
    for(auto it : b) cnt++;
    cnt >= 4 ? yes : no;
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