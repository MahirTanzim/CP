#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void sln0(){
    int n; cin >> n;
    string s;
    cin >> s;
    int len = n;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B') break;
        len--;
    }
    for(int i = n-1; i > 0; i--){
        if(s[i] == 'B') break;
        len--;
    }
    cout << len << endl; 
}

void sln1(){

   return;
}

int main(){
    bijli();
    int tc=1;
    cin >> tc;
    while(tc--){
        sln0();
        // sln1();
    }
    return 0;
}