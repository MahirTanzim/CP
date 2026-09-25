#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int a, b, c;
    cin >> a >> b >> c;
  
    cout << ((c%2==0 && a>b) || (c%2!=0 && a>=b) ? "First" : "Second") << endl;
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