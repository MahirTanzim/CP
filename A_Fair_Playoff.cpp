#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(max(a,b) < min(c,d) || max(c,d) < min(a,b))
        cout << "NO" << endl;
    else cout << "YES" << endl;
}


int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}