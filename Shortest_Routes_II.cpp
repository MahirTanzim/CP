#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int n, m, q;
ll adj_matrix[501][501];
void floyd_warshal(){
    for(int k = 0; k < n; k++){
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	        	if(adj_matrix[i][k] != LLONG_MAX && adj_matrix[k][j] != LLONG_MAX && adj_matrix[i][k]+adj_matrix[k][j] < adj_matrix[i][j])
	        		adj_matrix[i][j] = adj_matrix[i][k]+adj_matrix[k][j];
	        }
	    }
    }
}

void solution(){
    
    cin >> n >> m >> q;
    for(int i = 0; i < 501; i++)
        for(int j = 0; j < 501; j++)
            i == j ? adj_matrix[i][j] = 0 : adj_matrix[i][j] = LLONG_MAX;

    for(int i = 0; i < m; i++){
        int a, b; ll c;
        cin >> a >> b >> c;
        adj_matrix[a][b] = c;
        adj_matrix[b][a] = c ;
    }
    floyd_warshal();
    while(q--){
        int a, b; cin >> a >> b;
        if(adj_matrix[a][b] == LLONG_MAX) 
            cout << "-1" << endl;
        else cout << adj_matrix[a][b] << endl;
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