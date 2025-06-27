#include <bits/stdc++.h>
using namespace std;
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
# define endl "\n"
# define ll long long int
# define all(x) x.begin(),x.end()


int main(){
    bijli();
    string s; int n;
    cin >> s >> n;
    cout << (s.size()>=n? "Yes" : "No") << endl;
    return 0;
}