#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n, k; cin >> n >> k;
    vector <int> v(n);
    vin(v);
    sort(all(v));
    int a;
    for(int i = 0; i < n; i++){
        a = k-v[i];
        if(a > v[i]){
            int l = i+1;
            int r = n-1;
        }
        else()
        while (l <= r) {
        int mid = l + (r - l) / 2;

        
        if (arr[mid] == x)
            return mid;

        
        if (arr[mid] < x)
            l = mid + 1;

        
        else
            r = mid - 1;
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