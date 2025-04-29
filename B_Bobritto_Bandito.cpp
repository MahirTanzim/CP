#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int l1, r1;
    int li = m/2;
    int ri;
    m%2 == 0 ? ri = li : ri = li+1;
    
    if(ri > abs(r)) {
        r1 = r;
        l1 = li+ri-r;
    }
    else if(li > abs(l)){
        l1 = abs(l);
        r1 = ri+li-abs(l);
    }
    else{
        l1 = li;
        r1 = ri;
    }
    cout << -l1 << " " << r1 << endl;

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