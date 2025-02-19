#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


void solution(){
    int n, e;
	cin >> n >> e;
    
    int adj_mtrx[n][n];
    memset(adj_mtrx, 0, sizeof(adj_mtrx));

    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	adj_mtrx[a][b] = 1;
    	// adj_mtrx[b][a] = 1;
    }

    int Q; cin >> Q;
    while(Q--){
        int x, y;
        cin >> x >> y;
        x == y || adj_mtrx[x][y] == 1 ? yes : no;

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