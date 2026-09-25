#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    ll n; cin >> n;
    ll m1 = 0, m2 = 0, m3 = 0;
    ll cnt_hao = 0;
    while(n>2){
        if(n%3 == 0){
            m1 = m2 = m3 = n/3;
            
        }
        else if(n%3==1){
            m1 = m2 = n/3;
            m3 = m2+1;
        }
        else if(n%3 == 2){
            m1 = m2 = n/3;
            m3 = m2+2;
        }
        cnt_hao+=m1;
        n = m3;
    }
    cout << cnt_hao << endl;
    

}

int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}