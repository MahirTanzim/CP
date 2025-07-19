#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int m, n; cin >> m >> n;
    if(n == 1 || m == 1) cout << "NO" << endl;
    else if(n==2 && m == 2)  cout << "NO" << endl;
    else cout << "YES" << endl;
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