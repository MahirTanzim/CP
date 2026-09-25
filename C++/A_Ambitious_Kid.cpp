#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base :: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        v.push_back((x>0?x:-x));
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    
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