#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

class edge{

    public:
        ll a, b, c;
        edge(ll a, ll b, ll c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};



void bellman_ford(vector <edge> &edge_list, vector <ll> &dist, ll n){
	for(ll i = 0; i < n-1; i++){
		for(auto ed : edge_list){
			ll a, b, c;
			a = ed.a;
			b = ed.b;
			c = ed.c;
			if(dist[a] != LLONG_MAX && dist[a]+c < dist[b])
				dist[b] = dist[a]+c;
		}
	}
    
}
void solution(){
    ll n, e;
    vector <edge> edge_list;
    
    cin >> n >> e;
    vector <ll> dist(n+1, LLONG_MAX);
    while(e--){
        ll a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(edge(a, b, c));
    }

    ll source;
    cin >> source;
	dist[source] = 0;

    ll t; cin >> t;
    vector <ll> v(t);
    for (auto &it : v) cin >> it;

    bellman_ford(edge_list, dist, n);


	for(auto ed : edge_list){
		ll a, b, c;
		a = ed.a;
		b = ed.b;
		c = ed.c;
		if(dist[a] != LLONG_MAX && dist[a]+c < dist[b]){
            cout << "Negative Cycle Detected" << endl;
            return;
        }
	}

    for(auto it : v){
        if(dist[it] == LLONG_MAX)
            cout << "Not Possible" << endl;
        else cout << dist[it] << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc =1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}