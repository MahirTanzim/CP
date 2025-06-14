#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, m; cin >> n;
    int even = 0, odd = 0;
    for(int i = 0; i < 2*n; i++){
        cin >> m;
        m%2==0?odd++:even++;
    }
    cout << (odd==even?"YES":"NO") << endl;

}


int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}