#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n; cin >> n;
    vector <int> v(n);
    vector <bool> erased(n, false);
    for(int i = 0; i < n; i++)
        v[i] = i;
    for(int i = 0; i < n; i++){
        if(erased[i]) continue;
        erased[i] = true;
        bool bob = false;
        for(int j = 0; j < n; j++){
            
            if(!erased[j] && (i+j-3)%4==0){
                erased[j] = true;
                bob = true;
                break;
            }
        }
        if(!bob){
            cout << "Alice" << endl;
            return;
        }
    }

    cout << "Bob" << endl;
    

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