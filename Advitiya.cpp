#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()

string s = "ADVITIYA";
void solution(){
    string ss;
    cin >> ss;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] - ss[i] >= 0)
            cnt+= (s[i] - ss[i]);
        else
            cnt+= (26 + s[i] - ss[i]);
    }

    cout << cnt << endl;
    
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