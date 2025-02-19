#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


char grid[1001][1001];
bool visited[1001][1001];
vector <pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m, cnt, mn;
vector <int> v;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	return true;
}

void dfs(int si, int sj){
    cnt++;
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
    mn = INT_MAX;
    memset(visited, false, sizeof(visited));
    bool flag = false;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!visited[i][j] && grid[i][j] == '.'){
                flag = true;
                cnt = 0;
                dfs(i, j);
                mn = min(mn, cnt);
            }
                
    flag ? cout << mn << endl : cout << "-1" << endl;
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