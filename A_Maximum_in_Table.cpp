#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;



void solution(){
    int n; cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++)
        a[i][0] = 1;
    for(int i = 0; i < n; i++)
        a[0][i] = 1;

    
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }

    cout << a[n-1][n-1] << endl;
}




int main()
{
    bijli();
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}