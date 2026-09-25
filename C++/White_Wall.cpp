#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()


void solution(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
    int cnt = 0;
    char r = 'R', g = 'G', b = 'B';

    for(int i = 0; i < s.size(); i+=3){
        if(s[i] != r) {cnt1++; cnt2++;}
        if(s[i] != g) {cnt3++; cnt4++;}
        if(s[i] != b) {cnt5++; cnt6++;}      
    }

    for(int i = 1; i < s.size(); i+=3){
        if(s[i] != g) {cnt1++; cnt6++;}
        if(s[i] != b) {cnt2++; cnt4++;}
        if(s[i] != r) {cnt3++; cnt5++;}
        
    }

    for(int i = 2; i < s.size(); i+=3){
        if(s[i] != b) {cnt1++; cnt3++;}
        if(s[i] != g) {cnt2++; cnt5++;}
        if(s[i] != r) {cnt4++; cnt6++;}
    }

    cout << min({cnt1, cnt2, cnt3, cnt4, cnt5, cnt6}) <<endl;

    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}