#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;

ll n, e;
ll adj_matrix[105][105];
void floyd_warshal(){
    for(ll k = 1; k <= n; k++){
	    for(ll i = 1; i <= n; i++){
	        for(ll j = 1; j <= n; j++){
	        	if(adj_matrix[i][k] != LLONG_MAX && adj_matrix[k][j] != LLONG_MAX && adj_matrix[i][k]+adj_matrix[k][j] < adj_matrix[i][j])
	        		adj_matrix[i][j] = adj_matrix[i][k]+adj_matrix[k][j];
	        }
	    }
    }
}

void solution(){
    
    cin >> n >> e;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= n; j++)
        	i == j ? adj_matrix[i][i] = 0 : adj_matrix[i][j] = LLONG_MAX;
            
    while(e--){
    	ll a, b, c;
    	cin >> a >> b >> c;
    	adj_matrix[a][b] = min(adj_matrix[a][b], c);
    }

    floyd_warshal();

    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        cout << (adj_matrix[a][b] != LLONG_MAX ? adj_matrix[a][b] : -1 ) << endl;
    }

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