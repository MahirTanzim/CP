#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, x;
    cin >> n >> x;
    vector <int> v(1, 0), dist;
    while(n--){
        int a; cin >> a;
        v.push_back(a);
    }
    v.push_back(x);
    for(int i = 1; i < v.size(); i++)
        dist.push_back(v[i]-v[i-1]);
    dist[dist.size()-1]*=2;

    cout << *max_element(all(dist)) << endl;
    

}


int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}