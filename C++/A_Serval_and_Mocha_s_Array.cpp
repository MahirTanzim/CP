#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

int gcd(int a, int b){
    if(a>b) swap(a,b);
    while(1){
        if(b%a==0) return a;
        b%=a;
        swap(a,b);
    }
}


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &i : v) cin >> i;
    bool flag = false;
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(gcd(v[i], v[j])<=2){
                flag = true; 
                break;
            }
        
    cout << (flag? "Yes" : "No") << endl;
    
        
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