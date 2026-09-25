#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        s.insert(val);
    }
    for(auto it : s)
        cout << it << " ";
    cout << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}