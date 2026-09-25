#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;

int digit(ll n){
    int cnt = 0;
    while(n!=0){
        n/=10;
        cnt++;
    }
    return cnt;
}

void solution(){
    int n; cin >> n;
    int dig = digit(n);
    if(dig < 2){
        cout << n << endl;
        return;
    }
    int cnt = (dig-1)*9;
    int base = pow(10, dig-1);
    if(n > base){
        int d = 1;
        while(1){
            
            int num = d;
            for(int i = 1; i < dig; i++){
                num = num*10+d;
            }
            if(num > n) break;
            cnt++;
            d++;
        }
    }

    cout << cnt << endl; 
    
    

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