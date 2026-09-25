#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n), b, c;
    for(int &i : v) cin >> i;
    if(count(v.begin(), v.end(), v[0]) == v.size()){
        cout << -1 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int br;
    for(int i = 0; i < n-1; i++){
        b.push_back(v[i]);
        if(v[i]!=v[i+1]){
            br = i;
            break;
        }
    }
    for(int i = br+1; i < n; i++) c.push_back(v[i]);
    cout << b.size() << " " << c.size() << endl;
    for(int i : b) cout << i << " ";
    cout << endl;
    for(int i : c) cout << i << " ";
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