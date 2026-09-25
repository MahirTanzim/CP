#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int cnt0=0, cnt1=0;
    for(char c : s) c=='0' ? cnt0++ : cnt1++;
    // cout << cnt0/2+cnt1/2 << endl;
    
    if(cnt0/2+cnt1/2 < k){
        cout << "NO" << endl;
        return;
    }
    while(k--)
        cnt0 > cnt1 ? cnt0-=2 : cnt1-=2;

    cout << (cnt1==cnt0 ? "YES" : "NO") << endl;
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