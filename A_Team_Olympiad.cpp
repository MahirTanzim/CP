#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <int> prg, math, pe;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1) prg.push_back(i+1);
        else if(x == 2) math.push_back(i+1);
        else pe.push_back(i+1);
    }
    int tmcnt = min({prg.size(), math.size(), pe.size()});
    if(tmcnt == 0){
        cout << tmcnt << endl;
        return;
    }
    cout << tmcnt << endl;
    for(int i = 0; i < tmcnt; i++)
        cout << prg[i] << " " << math[i] << " " << pe[i] << endl;

    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}