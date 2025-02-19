#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"

char grid[1001][1001];
bool visited[1001][1001];
vector <pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;



bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	return true;
}

void bfs(int si, int sj){
    queue <pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while(!q.empty()){
        pair <int, int> node = q.front();
        q.pop();
        int node_i = node.first;
        int node_j = node.second;

        // cout << node_i << " " << node_j << endl;

        for(int i = 0; i<4; i++){
        	int ci = node_i + d[i].first;
        	int cj = node_j + d[i].second;
            if(valid(ci, cj) && !visited[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B')){
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}


void solution(){
    cin >> n >> m;
    int si, sj, di, dj;
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	    	cin >> grid[i][j];
            if(grid[i][j] == 'A'){
                si = i; sj = j;
            }
            if(grid[i][j] == 'B'){
                di = i; dj = j;
            }
	    }
	}
	memset(visited, false, sizeof(visited));
	bfs(si, sj);
    
	visited[di][dj] ? yes : no;
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