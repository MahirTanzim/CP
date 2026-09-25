#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int

int solution(){
    vector <int> v(5);
    cin >> v[0] >> v[1] >> v[3] >> v[4];
    v[2] = v[3]-v[1];
    int cnt = 0;
    for(int i = 0; i < 3; i++)
        if(v[i] == v[i+2]-v[i+1])
            cnt++;
    v[2] = v[0]+v[1];
    int cnt1 = 0;
    for(int i = 0; i < 3; i++)
        if(v[i] == v[i+2]-v[i+1])
            cnt1++;
    return max(cnt, cnt1);
}

int solution2(){
    int a, b, d, e;
    cin >> a >> b >> d >> e;
    int c1 = a + b;
    int c2 = d - b;
    int c3 = e - d;
    if(c1 == c2 && c2 == c3)
        return 3;
    if((c1 == c2 && c2 != c3) || (c1 == c3 && c1 != c2) || (c2 == c3 && c1 != c2))
        return 2;
    if(c1 != c2 && c2 != c3)
        return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        // cout << solution();
        cout << solution2();
        cout << endl;
    }
    return 0;
}