#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;

double validscore(){
    double score;
    while(true){
        cin >> score;
        if(score > 10 || score < 0)
            cout << "nota invalida" << endl;
        else return score;
    }
}
void solution(){
    double sc1, sc2;
    while(true){
        sc1 = validscore();
        sc2 = validscore();
        cout << fixed << setprecision(2) << "media = " << (sc1+sc2)/2 << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;
        int x;
        while(cin >> x && (x != 1 &&  x!= 2))
            cout << "novo calculo (1-sim 2-nao)" << endl;
        
        if(x == 1) continue;
        if(x == 2) break;
    }
    
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