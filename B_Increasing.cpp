#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n;
    cin >> n;
    map <ll, int> mp;
    ll num;
    while(n--){
        cin >> num;
        mp[num]++;
    }
    for(auto it : mp){
        if(it.second > 1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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