#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; string s;
    cin >> n >> s;
    int cont_space = 0, total_space = 0;
    for(char c : s){
        if(c=='#')
            cont_space = 0;
        else{
            cont_space++;
            total_space++;
        }
        if(cont_space == 3){
            cout << 2 << endl; 
            return;
        }
    }
    cout << total_space << endl;
    
}


int main()
{
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}