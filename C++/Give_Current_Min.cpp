#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n;
    cin >> n;
    priority_queue <ll, vector<ll>, greater<ll>> pq;
    for(int i = 0; i < n; i++){
        ll val;
        cin >> val;
        pq.push(val);
    }
    int Q;
    cin >> Q;
    while(Q--){
        int q;
        cin >> q;
        if(q == 0){
            ll x;
            cin >> x;
            pq.push(x);
            
        }
        if(q == 2 && !pq.empty())
            pq.pop();

        pq.empty() ? cout << "Empty" << endl: cout << pq.top() << endl;
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