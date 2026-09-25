#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    vector <string> v;
    string s;
    for(int i = 0; i < 8; i++){
        cin >> s;
        v.push_back(s);
    }
    string ss;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(v[i][j]>='a' && v[i][j]<='z')
                ss.push_back(v[i][j]);
        }
    }
    cout << ss << endl;
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