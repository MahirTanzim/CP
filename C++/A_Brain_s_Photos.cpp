#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n , m;
    cin >> n >> m;
    char photo[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> photo[i][j];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j]=='Y'){
                cout << "#Color" << endl;
                return;
            }

        }
    }
    cout << "#Black&White" << endl;    
    
}

int main()
{
    bijli();
    int tc=1;
    // cin >> tc;
    while(tc--){
        solution();
    }
    return 0;
}