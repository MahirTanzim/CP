#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

bool is_distinct(vector<int>v){
    for(int i = 0; i < v.size(); i++)
        if(v[i] != v[0])
            return true;
    return false;
}

void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(auto &i : v) cin >> i;
    if(!is_distinct(v)){
        cout << "NO" << endl;
        return;
    }
    sort(all(v),greater<int>());
    if(v[0] == v[1]) swap(v[0], v[n-1]);

    cout << "YES" << endl;
    for(int i : v) cout << i << " ";
    cout << endl;
    
}


int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}