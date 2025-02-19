#include <bits/stdc++.h>
using namespace std;
# define endl "\n"


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector <int> a(m+1), q(k+1);
        for(int i = 1; i < n+1; i++)
            cin >> a[i];
        for(int i = 1; i < k+1; i++)
            cin >> q[i];
        
        if(n-k > 1){
            for(int i = 1; i < m+1; i++)
                cout << '0';
        }
        else if(n == k){
            for(int i = 1; i < m+1; i++)
                cout << '1';
        }
        else{
            int c;
            vector <int> x(n+1, 0);
            for(int i = 1; i < k+1; i++)
                x[q[i]]++;
            for(int i = 1; i < n+1; i++)
                if(x[i] == 0){
                    c = i;
                    break;
                }
            for(int i = 1; i < m+1; i++){
                if(a[i] == c)
                    cout << '1';
                else
                    cout << "0";

            }
            
        }

        cout << endl;
    }
    
    
    return 0;
}