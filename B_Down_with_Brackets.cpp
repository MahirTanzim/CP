#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    string s;
    cin >> s;
    int blnc = 0, cnt_blnc = 0;
    for(char c : s){
        c == '(' ? blnc++ : blnc--;
        if(blnc == 0) cnt_blnc++;
    }
    cout << (cnt_blnc > 1 ? "YES" : "NO") << endl;

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