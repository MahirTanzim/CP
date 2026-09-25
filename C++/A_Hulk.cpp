#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n;
    cin >> n;
    string s = "I hate";
    string a = " that I love";
    string b = " that I hate";
    cout << s;
    for(int i = 2; i <= n; i++)
        i%2 == 0 ? cout << a : cout << b;
    cout << " it"; 

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