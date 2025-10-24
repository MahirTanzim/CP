#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector <int>idx1;
    
    for(int i = 0; i < n; i++)
        if(s[i]=='1') idx1.push_back(i);
    if(idx1.size()==0){
        cout << 0 << endl; 
        return;
    }
    int protec_cnt = 1;
    for(int i = 1; i < idx1.size(); i++)
        if(idx1[i]-idx1[i-1] > k-1) protec_cnt++;
    
    cout << protec_cnt << endl;
     


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