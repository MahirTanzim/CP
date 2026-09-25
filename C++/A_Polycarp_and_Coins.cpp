#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    ll n;
    cin >> n;
    ll coins = n/3;
    if(n%3==0) cout << coins << " " << coins << endl;
    else if(n%3==1) cout << coins+1 << " " << coins << endl;
    else if(n%3==2)cout << coins << " " << coins+1 << endl;
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