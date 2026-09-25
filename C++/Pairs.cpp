#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


bool cmp(pair<string, int> l, pair<string, int> r){
	if (l.first != r.first) 
        return l.first < r.first;  
    return l.second > r.second;
}

void solution(){
    int n;
    cin >> n;
    vector <pair <string, int>> v;
    
    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});  
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(auto it : v)
        cout << it.first << " " << it.second << endl;

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