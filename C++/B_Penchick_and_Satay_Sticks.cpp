#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        vector <int>x(v);
        sort(x.begin(), x.end());

        for(int i = 0; i < n-1; i++){
            if(v[i] - v[i+1] == 1)
                swap(v[i], v[i+1]);
        }
        x == v ? yes : no;
    }
    
    return 0;
}