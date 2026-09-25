#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

list<string> v;
void solution(){
    string s;
    cin >> s;
    if(s == "ADD"){
        int pos;
        cin >> pos;
        string sname;
        cin >> sname;
        if(pos > v.size() || pos < 0)
            cout << "Invalid" << endl;
        else{
            auto it = v.begin();
            advance(it, pos);
            v.insert(it, sname);
        }
            
    }
    else if(s == "DELETE"){
        int pos;
        cin >> pos;
        if(pos > v.size()-1 || pos < 0 || v.size() == 0)
            cout << "Invalid" << endl;
        else{
            auto it = v.begin();
            advance(it, pos);
            v.erase(it);
        }
            
    }
    else if(s == "PRINT"){
        if(v.size() == 0)
            cout << "EMPTY" << endl;
        else{
            for(auto it : v)
                cout << it << " ";
            cout << endl;
        }
    }



}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}