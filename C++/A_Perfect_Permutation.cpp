#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    if(n%2!=0){
        cout << -1 << endl;
        return;
    }
    vector <int> v; 
    for(int i = 1; i <=n; i+=2){
        v.push_back(++i);
        v.push_back(--i);
    }
    for(int i : v) cout << i << " ";
    


}


int main(){
    bijli();
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}