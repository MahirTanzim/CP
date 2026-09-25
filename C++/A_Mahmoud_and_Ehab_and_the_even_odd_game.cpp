#include <bits/stdc++.h>
using namespace std;
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
# define endl "\n"
# define ll long long int
# define all(x) x.begin(),x.end()


int main(){
    bijli();
    ll n; cin >> n;
    cout << (n%2==0 ? "Mahmoud" : "Ehab") << endl;
    return 0;
}