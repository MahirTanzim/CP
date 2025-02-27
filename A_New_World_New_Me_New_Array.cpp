#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, k, p;
    cin >> n >> k >> p;
    if(k < 0)
        p*=(-1);
    if(k == 0)
        cout << "0" << endl;
    else if(k/p > n)
        cout << "-1" << endl;
    else if(k/p <= n && k%p == 0)
        cout << k/p << endl;
    else if(k/p < n && k%p != 0)
        cout << k/p+1 << endl;
    else if(k/p == n && k%p != 0)
        cout << "-1" << endl;

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