#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n), diff;
    for(int &i : v) cin >> i;
    sort(all(v), greater<int>());
    for(int i = 0; i < n-1; i++){
        diff.push_back(v[i]-v[i+1]);
    }

    cout << *min_element(all(diff)) << endl;

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