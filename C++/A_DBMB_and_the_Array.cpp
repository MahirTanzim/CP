#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()
void solution(){
   int n, s, x; cin >> n >> s >> x;
   vector <int> v(n);
   for(int &i : v) cin >> i;
   int sum = accumulate(all(v), 0);
   cout << (sum > s ? "NO" : (s-sum)%x==0 ? "YES" : "NO") << endl;

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