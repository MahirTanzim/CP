#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    string s, ss;
    cin >> s >> ss;
    for(char &c : s)
        if(c=='G') c = 'B';
    for(char &c : ss)
        if(c=='G') c = 'B';
    
    cout << (s==ss?"YES":"NO") << endl;
    
    
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