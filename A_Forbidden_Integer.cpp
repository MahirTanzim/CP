#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, k, x;
    cin >> n >> k >> x;
    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        for(int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
    }
    else{
        if(k==1){
            cout << "NO" << endl;
        }
        else if (k==2){
            
        }
    }
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