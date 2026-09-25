#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    int n; cin>>n;
    string a = "##", b = "..";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i%2!=0){
                cout << (j%2 != 0? a:b);
                
            } 
            else{
                cout << (j%2 != 0? b:a);
                
            }
        }
        cout << endl;
        for(int j = 1; j <= n; j++){
            if(i%2!=0){
                cout << (j%2 != 0? a:b);
                
            } 
            else{
                cout << (j%2 != 0? b:a);
                
            }
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}