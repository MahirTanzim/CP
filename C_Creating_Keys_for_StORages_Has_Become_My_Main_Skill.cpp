#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n, x;
    cin >> n >> x;
    vector<int> v;
    
    
    for(int i = 0; i <= x && v.size() < n; i++) v.push_back(i);
    
    
    int next = x + 1;
    while (v.size() < n) {
        v.push_back(next++);
    }

    
    int orsum = 0;
    for (int num : v) orsum |= num;

   
    if(orsum != x){
        fill(all(v), 0);
        v.back() = x;
    }
        
    
    for (int num : v){
        cout << num << " ";
    }
    cout << endl;
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