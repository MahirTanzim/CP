#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, a, b;
    cin >> n >> a >> b;
    
    int amount;
    if(2*a > b)
        n%2==0 ? amount = b*n/2 : amount = b*(n-1)/2+a;
    else amount = a*n;
    cout << amount << endl;
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