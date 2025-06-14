#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;
    for(char c : s){
        c=='L' ? x-- : c=='R'? x++ : c=='U'? y++ : y--;
        if(x==1 && y==1){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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