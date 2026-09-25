#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


int leader[100001];
int group_size[100001];

int find(int node){
	
	if(leader[node] == -1)
		return node;
	int ult_leader = find(leader[node]);
	leader[node] = ult_leader;
	return ult_leader;
}

void dsu_union(int node1, int node2){
	int leader1 = find(node1);
	int leader2 = find(node2);

	if(group_size[leader1] > group_size[leader2]){
		leader[leader2] = leader1;
		group_size[leader1]+=group_size[leader2];
	}
	else {
		leader[leader1] = leader2;
		group_size[leader2]+=group_size[leader1];
	}
}

void solution()
{
	memset(leader, -1, sizeof(leader));
	memset(group_size, 1, sizeof(group_size));
    int n, e;
    cin >> n >> e;
    int cycle = 0;
    while(e--){
    	int a, b;
    	cin >> a >> b;
    	int leader_a = find(a);
    	int leader_b = find(b);

    	if(leader_a == leader_b) 
    		cycle++;
    	else 
    		dsu_union(a, b);
    }

    cout << cycle << endl;
    
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