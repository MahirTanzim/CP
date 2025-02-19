#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

char grid[1001][1001];
bool visited[1001][1001];
vector <pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
vector <int> v;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || grid[i][j] == '#')
		return false;
	return true;
}


void bfs(int si, int sj){
    queue <pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    int cnt = 0;
    while(!q.empty()){
        pair <int, int> node = q.front();
        q.pop();
        int node_i = node.first;
        int node_j = node.second;
        cnt++;
        
        for(int i = 0; i<4; i++){
        	int ci = node_i + d[i].first;
        	int cj = node_j + d[i].second;
            if(valid(ci, cj) && !visited[ci][cj]){
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
    v.push_back(cnt);
}

void solution(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && !visited[i][j])
                bfs(i, j);    
        }
    }
    
    if(v.empty()){
        cout << "0";
    }
    sort(all(v));
    for(auto it: v)
        cout << it << " ";
    
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