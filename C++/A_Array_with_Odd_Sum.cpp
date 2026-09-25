#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;

bool all_even(vector<int> v){
    for(int i : v)
        if(i%2!=0) return false;
    return true;
}

bool all_odd(vector <int> v){
    for(int i : v)
        if(i%2==0) return false;
    return true;

}
void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    if((n%2 != 0 && all_odd(v)) || (!all_odd(v) && !all_even(v)))
        cout << "YES" << endl;
    else cout << "NO" << endl;
    
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