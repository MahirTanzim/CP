#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    int cnt2 = count(all(v),2);
    if(cnt2%2!=0){
        cout << -1 << endl;
        return;
    }
    if(cnt2==0){
        cout << 1 << endl;
        return;
    }
    cnt2/=2;
    int cnt = 0, ans;
    for(int i = 0; i < n; i++){

        if(v[i]==2) cnt++;
        if(cnt==cnt2){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;

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