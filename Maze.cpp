#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(), x.end()

char grid[1001][1001];
bool visited[1001][1001];
int level[1001][1001];
pair<int, int> previous[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
vector<int> v;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || grid[i][j] == '#')
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    int cnt = 0;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int node_i = node.first;
        int node_j = node.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = node_i + d[i].first;
            int cj = node_j + d[i].second;
            if (valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][ci] = level[node_i][node_j] + 1;
                previous[ci][cj] = {node_i, node_j};
            }
        }
    }
    v.push_back(cnt);
}

void solution()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    for (int i = 0; i < 1001; i++)
        for (int j = 0; j < 1001; j++)
            previous[i][j] = {-1, -1};
    bfs(si, sj);
    vector<pair<int, int>> path;
    pair<int, int> node = {di, dj};
    while (node != make_pair(-1, -1))
    {
        path.push_back(node);
        node = previous[node.first][node.second];
    }
    for (int i = 1; i < path.size() - 1; i++)
        grid[path[i].first][path[i].second] = 'X';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}