#include <bits/stdc++.h>
using namespace std;
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
# define endl "\n"
# define ll long long int
# define all(x) x.begin(),x.end()


int main(){
    bijli();
    int n; cin >> n;
    vector <int> v(n);
    for(auto &it : v) cin >> it;
    int mx_sub = 1, sub = 1;
    for(int i = 1; i < n; i++){
        if(v[i]>v[i-1]){
            sub++;
            mx_sub = max(mx_sub, sub);
        }
        else sub = 1;
    }    
    cout << mx_sub << endl;
    
    return 0;
}

