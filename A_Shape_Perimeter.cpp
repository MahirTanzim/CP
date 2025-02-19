#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int solution(int n, int p){
    int x, y;
    
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(!i) continue;
        p+=(2*x + 2*y);
    }
    return p;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        cout << solution(n, 4*m) << endl;
        
    }
    
    
    return 0;
}