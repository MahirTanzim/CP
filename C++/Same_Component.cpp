#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


char grid[1001][1001];
bool visited[1001][1001];
vector <pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
vector <int> v;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m )
		return false;
	return true;
}

void dfs(int si, int sj){
    visited[si][sj] = true;
    for(int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(!visited[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.')
            dfs(ci, cj);
    }
}




void solution(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(visited, false, sizeof(visited));
    dfs(si, sj);
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