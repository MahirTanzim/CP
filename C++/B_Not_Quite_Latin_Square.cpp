#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
#define vin(x) for(auto &it : x) cin >> it;


void solution(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int cnt_a = count(all(s1), 'A') + count(all(s2), 'A') + count(all(s3), 'A');
    int cnt_b = count(all(s1), 'B') + count(all(s2), 'B') + count(all(s3), 'B');
    int cnt_c = count(all(s1), 'C') + count(all(s2), 'C') + count(all(s3), 'C');

    cnt_a == 2 ? cout << "A" : cnt_b == 2 ? cout << "B" : cout << "C";
    cout << endl;
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