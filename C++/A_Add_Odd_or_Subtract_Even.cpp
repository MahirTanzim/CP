#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int solution(){
    int a, b; cin >> a >> b;
    if(a==b) return 0;
    if(a>b){
        if(a%2==0 && b%2==0 || a%2!=0 && b%2!=0) return 1;
        else return 2;
    }
    else{
        if(a%2==0 && b%2==0 || a%2!=0 && b%2!=0) return 2;
        else return 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--){
        cout << solution() << endl;
    }
    return 0;
}