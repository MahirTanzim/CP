#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; string s; 
    cin >> n >> s;
    int cnt1 = count(all(s), ')');
    int cnt2 = count(all(s), '(');
    cout << (cnt1==cnt2?"YES":"NO") << endl;
    
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