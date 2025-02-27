#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int k;
    cin >> k;
    vector <int> p;
    while(k){
        int l = 500;
        for(int i = 0; i < 500; i++)
            if(i*(i-1)/2 > k){
                l = i-1;
                p.push_back(l);
                break;
            }
        k-=l*(l-1)/2;
    }
    int x = 0, y = 0;
    vector <pair<int,int>> v;
    for(auto it : p){
        for(int i = 0; i < it; i++){
            v.push_back(make_pair(x, y++));
        }
        x++;
    }
    cout << v.size() << endl;
    for(auto it : v)
        cout << it.first << " " << it.second << endl;

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