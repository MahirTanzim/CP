#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;
    int f_count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='F'){
            f_count++;
            if(f_count>=k){
                cout << "YES" << endl;
                return;
            }
        }
        else f_count = 0;
    }
    cout << "NO" << endl;
}


int main()
{
    bijli();
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}