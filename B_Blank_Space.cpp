#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    int longest_space = 0;
    for(int i = 0; i < n; i++){
        int space = 0;
        if(v[i]==0){
            for(int j = i; v[j]==0 && j <= n; j++){
                space++;
            }
            i+=(space-1);
        }
        if(space > longest_space) longest_space = space;
    }
    cout << longest_space << endl;
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