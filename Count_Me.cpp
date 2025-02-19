#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    string s, w;
    getline(cin, s);
    
    map <string, int> mp, mp2;
    stringstream ss(s), sss(s);
    
    while(ss >> w)
        mp[w]++;

    int mx_cnt = INT_MIN;
   
    for(auto it : mp){
        if(it.second > mx_cnt){
            mx_cnt = it.second;
        }
    }

    string mx_w;
    while(sss >> w){
        mp2[w]++;
        if(mp2[w] == mx_cnt){
            mx_w = w;
            break;
        }
    }

    cout << mx_w << " " << mx_cnt << endl;
        
    
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    cin.ignore();
    while(t--){
        solution();
    }
    return 0;
}