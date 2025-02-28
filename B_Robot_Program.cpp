#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n, x, k; string s;
    cin >> n >> x >> k >> s;
    ll cnt = 0;
    int time = 0;
    for(auto it : s){
        if(it=='L') x--;
        else x++;
        time++;
        if(x == 0){
            cnt++;
            break;
        }
    }
    if(!cnt){
        cout << "0" << endl;
        return;
    }
    k-=time;
    time = 0;
    for(auto it : s){
        if(it=='L') x--;
        else x++;
        time++;
        if(x == 0) break;
    }
    if(x == 0){
        cnt+=(k/time);
    }
    
    cout << cnt << endl;
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