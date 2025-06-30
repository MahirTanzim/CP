#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

bool odd(int n){
    return n%2;
}
bool even(int n){
    return !n%2;
}
bool same(int a, int b) {
    return (a % 2 == b % 2);
}

void solution(){
    int n; cin>> n;
    vector <int> v(n);
    for(int &it : v) cin >> it;
    sort(v.begin(), v.end());
    if(same(v[0], v[n-1])){
        cout << 0 << endl;
        return;
    }
    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        if(same(v[i], v[n-1])) break;
        left++;
    }
    for(int i = n-1; i > 0; i--){
        if(same(v[i], v[0])) break;
        right++;
    }
    cout << min(left, right) << endl;       

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