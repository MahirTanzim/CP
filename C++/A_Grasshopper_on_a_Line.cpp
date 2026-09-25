#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int x, k; cin >> x >> k;
    if(x%k!=0)
        cout << 1 << endl << x << endl;
    else{
        cout << 2 << endl;
        int i = 1, j = x-1;
        while(i<=j){
            if (i%k!=0 && j%k!=0){
                cout << i <<  " " << j << endl;
                return;
            }
            i++; j--;
        }
    }
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