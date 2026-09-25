#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, e;
    cin >> n >> e;
    vector <int>adj_list[n];
    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	adj_list[a].push_back(b);
    	adj_list[b].push_back(a);
    }

    int Q; cin >> Q;
    while(Q--){
        int q; cin >> q;
        if(adj_list[q].empty())
            cout << "-1" << endl;
        else{
            sort(all(adj_list[q]), greater<int>());
            for(auto it : adj_list[q])
                cout << it << " ";
            cout << endl;
        }
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