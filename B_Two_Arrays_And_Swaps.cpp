#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n, k; cin >> n >> k;
    vector <int> a(n), b(n);
    for(int &it : a) cin >> it;
    for(int &it : b) cin >> it;
    sort(all(a));
    sort(all(b), greater<int>());
    for(int i = 0; i < k; i++){
        if(a[i] > b[i]) break;
        swap(a[i], b[i]);

    }

    cout << accumulate(all(a), 0) << endl;
    
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