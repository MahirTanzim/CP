#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    vector<string>v(10);
    int point = 0;
    for(auto &it : v) cin >> it;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(v[i][j] == 'X' && (i==0 || j==0 ||i == 9 || j == 9)) point+=1;
            else if(v[i][j] == 'X' && (i==1 || j==1 ||i == 8 || j == 8)) point+=2;
            else if(v[i][j] == 'X' && (i==2 || j==2 ||i == 7 || j == 7)) point+=3;
            else if(v[i][j] == 'X' && (i==3 || j==3 ||i == 6 || j == 6)) point+=4;
            else if(v[i][j] == 'X' && (i==4 || j==4 ||i == 5 || j == 5)) point+=5;
        }
    }
    cout << point << endl;
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