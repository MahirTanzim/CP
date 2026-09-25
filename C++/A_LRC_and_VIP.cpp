#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int


bool all_eq(vector<int>v){
    int a = v[0];
    for(auto it : v)
        if(it != a)
            return false;
    return true;
}

void solution(){
    int n; cin >> n;
    vector <int> v(n), vv, vvv;
    for(auto &it : v) cin >> it;
    vv = v;
    int x = vv[0], y;

    if(all_eq(v))
        cout << "No" << endl;
    else{
        for(int i = 1; i < n; i++){
            if(v[i] != v[i-1]){
                y = v[i];
                break;
            }
        }
        
        sort(vv.begin(), vv.end());
        for(auto it : v)
            if(it%y == 0)
                vvv.push_back(2);
            else
                vvv.push_back(1);

        cout << "Yes" << endl;
        for(auto it : vvv)
            cout << it << " ";
        cout << endl;
    }
    
        
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}