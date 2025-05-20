#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin >> n;
    set <int> v1, v2;
    if((n*(n+1)/2)%2!=0){
        cout << "NO" << endl;
        return;
    }
    if(n%2 == 0){
        cout << "YES" << endl;
        int x = 1, y = n;
        while(x<y){
            v1.insert(x++);
            v1.insert(y--);
            v2.insert(x++);
            v2.insert(y--);
        }
        cout << v1.size() << endl;
        for(auto it : v1)
            cout << it << " ";
        cout << endl << v2.size() << endl;
        for(auto it : v2)
            cout << it << " ";
        cout << endl;
        
    
    }
    else{
        cout << "YES" << endl;
        int x = 1, y = n;
        while(x<y){
            v1.insert(x++);
            v1.insert(y--);
            if(x==y) break;
            v2.insert(x++);
            v2.insert(y--);
        }
        int temp = x/2;
        if(temp%2==0){
            v2.insert(x);
            v2.erase(temp); 
            v1.insert(temp);
            v1.erase(1); 
            v2.insert(1);
            v1.erase(x-1); 
            v2.insert(x-1);
            
        }
        else{
            v2.insert(x);
            v1.erase(temp); v2.insert(temp);
        }
        cout << v1.size() << endl;
        for(auto it : v1)
            cout << it << " ";
        cout << endl << v2.size() << endl;
        for(auto it : v2)
            cout << it << " ";
        cout << endl;
    
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}