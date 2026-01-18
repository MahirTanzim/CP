#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &it : v) cin >> it;
    map <int, int> mp;
    for(int it : v) mp[it]++;
    if(mp.size()>2){
        cout << "No" << endl;
        return;
    }
    if(mp.size() == 1){
        cout << "Yes" << endl;
    }else{
        int a = 0;
        for(auto it : mp){
            if(a) a-=it.second;
            else a+=it.second;
        }
        cout << (a <= 1 && a >= -1 ? "Yes" : "No") << endl;
    }

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