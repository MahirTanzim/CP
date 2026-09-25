#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

char grid[1001][1001];
bool visited[1001][1001];
int level[1001][1001];
pair<int,int> previous[1001][1001];
vector <pair<int, int>> d = {{-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {-2, 1}, {-2, -1}, {2, -1}, {2, 1}};
int n, m;
vector <int> v;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m || visited[i][j])
		return false;
	return true;
}


void bfs(int si, int sj){
    queue <pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    int cnt = 0;
    while(!q.empty()){
        pair <int, int> node = q.front();
        q.pop();
        int node_i = node.first;
        int node_j = node.second;
        
        
        for(int i = 0; i<8; i++){
        	int ci = node_i + d[i].first;
        	int cj = node_j + d[i].second;
            if(valid(ci, cj) && !visited[ci][cj]){
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][ci] = level[node_i][node_j]+1;
                previous[ci][cj] = {node_i, node_j};
            }
        }
    }
    v.push_back(cnt);
}

void solution(){
    cin >> n >> m;
    int si, sj, di, dj; 
    cin >> si >> sj >> di >> dj;
    if(si == di && sj == dj){
        cout << "0" << endl;
        return;
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    for(int i = 0; i < 1001; i++)
        for(int j = 0; j < 1001; j++)
            previous[i][j] = {-1, -1};
    bfs(si, sj);
    pair<int,int> node = {di, dj};
    int cnt = -1;
    while(node != make_pair(-1, -1)){
        cnt++;
        node = previous[node.first][node.second];
    }
    
    cnt == 0 ? cout << "-1" << endl : cout << cnt << endl;
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