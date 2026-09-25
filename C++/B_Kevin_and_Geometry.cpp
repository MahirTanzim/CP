#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int

void solution(int n){
    vector<ll>v(n);
    for(auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    int x, y;
    ll a = -1, b = -1, c = -1, d = -1;
    bool flag = false;
    bool found_duplicate = false;
    for(int i = 0; i < n - 1; i++){
        if (v[i] == v[i + 1]) {
            a = v[i];
            b = v[i + 1];
            x = i;
            y = i + 1;
            found_duplicate = true;
            break;
        }
    }
    
    if (!found_duplicate) {
        cout << "-1" << endl;
        return;
    }

    v.erase(v.begin() + x, v.begin() + y + 1);

    for(int i = 0; i < v.size()-1; i++){
        if((v[i+1] - v[i])  < (a+b)){
            flag = true;
            c = v[i];
            d = v[i+1];
            break;
        }
    }

    if(!flag){
        cout << "-1" << endl;
        return;
    }
    cout << a << " " <<  b << " " << c << " " << d << endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solution(n);
        
    }
    
    
    return 0;
}