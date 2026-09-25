#include <bits/stdc++.h>
using namespace std;
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
# define endl "\n"
# define ll long long int
# define all(x) x.begin(),x.end()


int main(){
    bijli();
    string s; cin >> s;
    char ptr = 'a';
    int r = 0;
    for(char c : s){
        int d = abs(ptr-c);
        d<13 ? r+=d : r+=(26-d);
        ptr = c;
    }
    cout << r << endl;
    
    
    return 0;
}