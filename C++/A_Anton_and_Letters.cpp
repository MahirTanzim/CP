#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string s; 
    getline(cin, s);
    set <char> ss;


    for(auto it : s){
        if(it >='a' && it <= 'z')
            ss.insert(it);
    }
    cout << ss.size() << endl;


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
    