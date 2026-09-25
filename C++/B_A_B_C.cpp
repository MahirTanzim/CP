#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string s;
    cin >> s;
    vector <int> a, b, c;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A')
            a.push_back(i+1);
        if(s[i] == 'B')
            b.push_back(i+1);
        if(s[i] == 'C')
            c.push_back(i+1);
    }
    int cnt = 0;
    for(int i : a)
        for(int j : b)
            for(int k : c)
                if(k-j == j-i)
                    cnt++;

    cout << cnt << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}