#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define bijli() (ios_base:: sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL));
#define ll long long int
#define all(x) x.begin(),x.end()

bool case1(string s){
    int x = 0;
    for(int i = 0; i < s.size()-2; i+=1){
        if(s[i]==s[i+1]) x++;
    }
    return x <=2;
}
bool case2(string s){
    int x = 0;
    for(int i = 0; i < s.size()-3; i+=1){
        if(s[i]==s[i+1] && s[i] == s[i+2]) x++;
    }
    return x <=1;
}

void solution(){
    string s; cin>>s;
    cout << (case1(s)? "YES" : case2(s)? "YES" : "NO" )<< endl;
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

