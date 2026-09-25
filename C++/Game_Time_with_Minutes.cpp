#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int h1, h2, m1, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int s = h2*60 - h1*60 + m2 - m1;
    if(s <= 0) s+=1440;
    cout << "O JOGO DUROU " << s/60 <<  " HORA(S) E " << s%60 <<  " MINUTO(S)" << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}