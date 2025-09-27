#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, i; cin >> n;
    int even_sum = 0, odd_sum = 0;
    while(n--) {
        cin >> i;
        if(i%2 == 0)
            even_sum+=i;
        else odd_sum+=i;
    }
    cout << (even_sum > odd_sum ? "YES" : "NO") << endl;

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